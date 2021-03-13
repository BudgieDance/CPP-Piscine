#include "span.hpp"

/*CONSTRUCTORS*/
Span::Span(){}

Span::Span(unsigned int N) : _max(N){}

Span::Span(Span const& src){
    *this = src;
}

Span::~Span(){}

/*OVERLOADS*/
Span& Span::operator=(Span const& src){
    this->_vec = src._vec;
    this->_max = src._max;
    return *this;
}

const char* Span::VectorFullException::what() const throw(){
    return "The container is already full";
};

const char* Span::FewNumbersException::what() const throw(){
    return "Not enough numbers";
};

/*ACTION*/
void Span::addNumber(int number){
    if (this->_vec.size() == this->_max)
        throw VectorFullException();
    this->_vec.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2){
    while (it1 != it2){
        if (this->_vec.size() == this->_max)
            throw VectorFullException();
        this->_vec.push_back(*it1);
        it1++;
    } 
}

int Span::shortestSpan(){
    if (this->_vec.size() < 2)
        throw FewNumbersException();

    std::sort(this->_vec.begin(), this->_vec.end());
    int span = this->_vec[1] - this->_vec[0];
    unsigned long index = 1;
    while(index < this->_vec.size()){
        if (this->_vec[index] - this->_vec[index - 1] < span)
            span = this->_vec[index] - this->_vec[index - 1];
        index++;
    }
    return span;
}

int Span::longestSpan(){
    if (this->_vec.size() < 2)
        throw FewNumbersException();

    int max = *(std::max_element(this->_vec.begin(), this->_vec.end()));
    int min = *(std::min_element(this->_vec.begin(), this->_vec.end()));
    return (max - min);
}