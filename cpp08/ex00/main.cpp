#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(){
    std::cout << "TEST WITH VECTORS" << std::endl;
    std::vector<int> vec1;
    vec1.push_back(21);
    vec1.push_back(42);
    vec1.push_back(88);
    vec1.push_back(666);
    vec1.push_back(481516);
    int n = 42;
    try{
       std::vector<int>::iterator it = easyfind(vec1, n);
       std::cout << *it << " - found" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << n << " - not found" << std::endl;
    }
    n = 333;
    try{
       std::vector<int>::iterator it = easyfind(vec1, n);
       std::cout << *it << " - found" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << n << " - not found" << std::endl;
    }

    std::cout << std::endl << "TEST WITH LISTS" << std::endl;
    std::list<int> list1;
    list1.push_back(21);
    list1.push_back(42);
    list1.push_back(123455);
    list1.push_back(777);
    list1.push_back(234);
    n = 777;
    try{
        std::list<int>::iterator it_list = easyfind(list1, n);
        std::cout << *it_list << " - found" << std::endl;
    } 
    catch(std::exception& ex){
        std::cout << n << " - not found" << std::endl;
    }
    n = 778;
    try{
        std::list<int>::iterator it_list = easyfind(list1, n);
        std::cout << *it_list << " - found" << std::endl;
    } 
    catch(std::exception& ex){
        std::cout << n << " - not found" << std::endl;
    }
    n = 21;
    try{
        std::list<int>::iterator it_list = easyfind(list1, n);
        std::cout << *it_list << " - found" << std::endl;
    } 
    catch(std::exception& ex){
        std::cout << n << " - not found" << std::endl;
    }
    return 0;
}