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

void Contact::set_params()
{
    std::cout << "Enter first name: ";
	getline(std::cin, this->first_name);
	std::cout << "Enter last name: ";
	getline(std::cin, this->last_name);
	std::cout << "Enter nickname: ";
	getline(std::cin, this->nickname);
	std::cout << "Enter login: ";
	getline(std::cin, this->login);
	std::cout << "Enter postal address: ";
	getline(std::cin, this->postal_addr);
	std::cout << "Enter email address: ";
	getline(std::cin, this->email_addr);
	std::cout << "Enter phone number: ";
	getline(std::cin, this->phone_number);
	std::cout << "Enter birthday date: ";
	getline(std::cin, this->birthday);
	std::cout << "Enter favorite meal: ";
	getline(std::cin, this->fav_meal);
	std::cout << "Enter underwear color: ";
	getline(std::cin, this->color);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, this->secret);
}

void Contact::print_params(void) const
{
    std::cout << "first name = " << this->first_name << std::endl;
	std::cout << "last name = " << this->last_name << std::endl;
	std::cout << "nickname = " << this->nickname << std::endl;
	std::cout << "login = " << this->login << std::endl;
	std::cout << "postal address = " << this->postal_addr << std::endl;
	std::cout << "email address = " << this->email_addr << std::endl;
	std::cout << "phone number = " << this->phone_number << std::endl;
	std::cout << "birthday = " << this->birthday << std::endl;
	std::cout << "favorite meal = " << this->fav_meal << std::endl;
	std::cout << "underwear color = " << this->color << std::endl;
	std::cout << "darkest secret = " << this->secret << std::endl;
}
std::string Contact::get_first_name(void) const
{
    return this->first_name;
}

std::string Contact::get_last_name(void) const
{
    return this->last_name;
}

std::string Contact::get_nickname(void) const
{
    return this->nickname;
}