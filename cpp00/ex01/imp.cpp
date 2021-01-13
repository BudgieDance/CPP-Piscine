#include "phonebook.hpp"

int Contact::number_of_contacts = 0;

void Contact::increment(void)
{
    Contact::number_of_contacts++;
}

int Contact::get_cont(void)
{
    return (Contact::number_of_contacts);
}