#include "Pony.hpp"

void pony_stack(){
    Pony pony_obj("Alexa", "big");
    pony_obj.introduction();
}

void pony_heap(){
    Pony *pony_ptr;

    pony_ptr = new Pony("Emma", "small");
    pony_ptr->introduction();
    delete pony_ptr;
}

int main(){
    std::cout << "Creating a pony on the stack: " << std::endl;
    pony_stack();
    std::cout << std::endl << "Creating a pony on the heap: " << std::endl;
    pony_heap();
    return 0;
}