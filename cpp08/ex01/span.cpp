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

/*ACTION*/
void Span::addNumber(int number){
    if (this->_vec.size() == this->_max)
        throw std::runtime_error("The container is already full");
    this->_vec.push_back(number);
    this->_max++;
}

int Span::shortestSpan() const{

}