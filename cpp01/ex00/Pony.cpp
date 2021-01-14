#include "Pony.hpp"

Pony::Pony(std::string name, std::string size) : _name(name), _size(size){
    if (size != "big" && size != "medium" && size != "small")
        this->_size = "default";
    std::cout << "Pony named " << this->_name << " was created" << std::endl;
}

Pony::~Pony(){
    std::cout << "Pony named " << this->_name << " was deleted" << std::endl;
}

void Pony::introduction() const{
    std::cout << "Hello there, I am a " << this->_size << " pony named " << this->_name << std::endl;
}