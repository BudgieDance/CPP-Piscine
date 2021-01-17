#include "Brain.hpp"

std::string Brain::identify() const{
    std::string address;
    std::stringstream my_stream;

    my_stream << this;
    address = my_stream.str();
    return address;
}