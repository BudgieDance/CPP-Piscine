#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

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
        int shortestSpan() const;
        int longestSpan() const;

        Span& operator=(Span const& src);
};

#endif