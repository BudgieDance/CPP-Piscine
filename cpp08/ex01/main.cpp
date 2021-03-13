#include "span.hpp"

int main(){
    Span sp = Span(5);
    try{
        sp.addNumber(5);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        sp.addNumber(3);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        sp.addNumber(17);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        sp.addNumber(9);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        sp.addNumber(11);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    try{
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }


    // Span sp1 = Span(5000);
    Span sp1 = Span(10000);
    std::vector<int> vec1(10000);
    int index = 0;
    while (index < 10000){
        vec1[index] = index + 1;
        index++;
    }
    try{
        sp1.addNumber(vec1.begin(), vec1.end());
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        std::cout << sp1.shortestSpan() << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    return 0;
}