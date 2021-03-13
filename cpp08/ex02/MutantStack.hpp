#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <list>
#include <vector>
#include <stack>
#include <iterator>
#include <iostream>


template<typename T>
class MutantStack : public std::stack<T>{
    public:

        MutantStack();
        MutantStack(MutantStack const& src);
        virtual ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
        reverse_iterator rbegin(){return this->c.rbegin();}
        reverse_iterator rend(){return this->c.rend();}

        MutantStack& operator=(MutantStack const& src);
};

template<typename T>
MutantStack<T>::MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& src){
    *this = src;
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const& src){
    std::stack<T>::operator=(src);
    return *this;
}

#endif