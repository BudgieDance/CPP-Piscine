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

    try{
       std::vector<int>::iterator it = easyfind(vec1, 42);
       std::cout << *it << std::endl;
    }
    catch(std::exception& ex){
        std::cout << "given number is not in the container" << std::endl;
    }

    try{
       std::vector<int>::iterator it = easyfind(vec1, 333);
       std::cout << *it << std::endl;
    }
    catch(std::exception& ex){
        std::cout << "given number was not found" << std::endl;
    }

    std::cout << std::endl << "TEST WITH LISTS" << std::endl;
    std::list<int> list1;
    list1.push_back(21);
    list1.push_back(42);
    list1.push_back(123455);
    list1.push_back(777);
    list1.push_back(234);
    try{
        std::list<int>::iterator it_list = easyfind(list1, 777);
        std::cout << *it_list << std::endl;
    } 
    catch(std::exception& ex){
        std::cout << "given number was not found" << std::endl;
    }

    try{
        std::list<int>::iterator it_list = easyfind(list1, 778);
        std::cout << *it_list << std::endl;
    } 
    catch(std::exception& ex){
        std::cout << "given number was not found" << std::endl;
    }

    try{
        std::list<int>::iterator it_list = easyfind(list1, 21);
        std::cout << *it_list << std::endl;
    } 
    catch(std::exception& ex){
        std::cout << "given number was not found" << std::endl;
    }
    return 0;
}