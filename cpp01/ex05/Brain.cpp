#include "Brain.hpp"

std::string Brain::identify() const{
    std::string address;
    std::stringstream my_stream;

    my_stream << "0x" << std::hex << std::uppercase << (unsigned long int) this;
    address = my_stream.str();
    return address;
}