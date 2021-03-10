#include "Array.hpp"

int main(){
    std::cout << "INTEGERS" << std::endl;
    Array<int> array1;
    Array<int> array2(3);

    unsigned int i = 0;
    while (i < array2.size()){
        try{
            array2[i] = i + 20;
        }
        catch(std::exception& ex){
            std::cout << "invalid inxed" << std::endl;
        }
        i++;
    }
    Array<int> array3(array2);
    std::cout << "array size = " << array3.size() << std::endl;
    i = 0;
    while (i < array3.size()){
        try{
            std::cout << array3[i] << " ";
        }
        catch(std::exception& ex){
            std::cout << "invalid index" << std::endl;
        }
        i++;
    }
    std::cout << std::endl << std::endl << "STRINGS" << std::endl;
    Array<std::string> arraystr(4);
    std::cout << "array size = " << arraystr.size() << std::endl;

    try{
        arraystr[0] = "hello"; 
        std::cout << arraystr[0] << " ";
    }
    catch(std::exception& ex){
        std::cout << "invalid index" << std::endl;
    }

    try{
        arraystr[1] = "there"; 
        std::cout << arraystr[1] << " ";
    }
    catch(std::exception& ex){
        std::cout << "invalid index" << std::endl;
    }

    try{
        arraystr[2] = "maggot"; 
        std::cout << arraystr[2] << " ";
    }
    catch(std::exception& ex){
        std::cout << "invalid index" << std::endl;
    }

    try{
        arraystr[3] = "haha"; 
        std::cout << arraystr[3] << std::endl;
    }
    catch(std::exception& ex){
        std::cout << "invalid index" << std::endl;
    }
    return 0;
}