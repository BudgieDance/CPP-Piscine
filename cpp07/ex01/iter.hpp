#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void print_out(T const & elem){
    std::cout << elem << " ";
}

template<typename T>
void iter(T* ptr, int len, void (*func)(T const & elem)){
    int i = 0;

    while (i < len){
        func(ptr[i]);
        i++;
    }
}
#endif