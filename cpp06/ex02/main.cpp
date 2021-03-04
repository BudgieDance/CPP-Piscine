#include <iostream>
#include <cstdlib>
#include <ctime>

class Base{

    public:
        virtual ~Base(){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base* generate(void){
    int number;

    number = rand() % 3;
    if (number == 0){
        std::cout << "class A was instanciated" << std::endl; 
        return new A;
    }
    else if (number == 1){
        std::cout << "class B was instanciated" << std::endl; 
        return new B;
    }
    else{
        std::cout << "class C was instanciated" << std::endl; 
        return new C;
    }
}

void identify_from_pointer(Base* base){
    A* a = dynamic_cast<A*>(base);
    B* b = dynamic_cast<B*>(base);
    C* c = dynamic_cast<C*>(base);

    if (a != NULL)
        std::cout << "A" << std::endl;
    else if (b != NULL)
        std::cout << "B" << std::endl;
    else if (c != NULL)
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base& base){

    try{
        A& a = dynamic_cast<A&>(base);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast& ex){}

    try{
        B& b = dynamic_cast<B&>(base);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast& ex){}

    try{
        C& c = dynamic_cast<C&>(base);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast& ex){}
}

int main(){
    Base* base;
    srand(time(NULL));

    base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    
    delete base;
    return 0;
}