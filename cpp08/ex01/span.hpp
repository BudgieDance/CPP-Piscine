#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span{

    private:
        unsigned int _max;
        std::vector<int> _vec;
        Span();

    public:
        Span(unsigned int N);
        Span(Span const& src);
        ~Span();

        void addNumber(int number);
        void addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
        int shortestSpan();
        int longestSpan();

        class VectorFullException : public std::exception{
            public:
                virtual const char* what() const throw();
        };

        class FewNumbersException : public std::exception{
            public:
                virtual const char* what() const throw();
        };

        Span& operator=(Span const& src);
};

#endif