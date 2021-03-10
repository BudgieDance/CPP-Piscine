#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>


template<typename T>
class Array{

    private:
        T* _arrPtr;
        unsigned int _arrSize;

    public:
        Array<T>();
        Array<T>(unsigned int const n);
        Array<T>(Array<T> const& src);
        ~Array<T>();

        unsigned int size() const;
        Array<T>& operator=(Array<T> const& src);
        T& operator[](unsigned int i);
};

template<typename T>
Array<T>::Array(){
    this->_arrSize = 0;
    this->_arrPtr = NULL;
}

template<typename T>
Array<T>::Array(unsigned int const n) : _arrSize(n){
    this->_arrPtr = new T[n];
}

template<typename T>
Array<T>::Array(Array<T> const& src){
    this->_arrPtr = NULL;
    *this = src;
}

template<typename T>
Array<T>::~Array(){
    if (this->_arrPtr != NULL)
        delete [] this->_arrPtr;
}

template<typename T>
unsigned int Array<T>::size() const{
    return this->_arrSize;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& src){
    unsigned int i = 0;
    if (this->_arrPtr != NULL)
        delete [] this->_arrPtr;
    if (src._arrSize){
        this->_arrSize = src._arrSize;
        this->_arrPtr = new T[this->_arrSize];
        while (i < this->_arrSize){
            this->_arrPtr[i] = src._arrPtr[i];
            i++;
        }
    }
    else{
        this->_arrSize = 0;
        this->_arrPtr = NULL;
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int i){
    if (i < this->_arrSize)
        return this->_arrPtr[i];
    throw std::exception();
}
#endif