#include "phonebook.hpp"

void print_index(int index)
{
    std::cout << std::setw(10);
    std::cout << index;
    std::cout << "|";
}

void print_string(std::string info)
{
    if (info.length() > 10)
	{
		info.erase(9, std::string::npos);
		info = info + ".";
	}
	std::cout << std::setw(10);
	std::cout << info;
    std::cout << "|";
}

void display_desired_contact(Contact *contacts)
{
    int index;

    std::cout << "Show index #: ";
    std::cin >> index;
    if (index < 1 || index > Contact::get_cont())
    {
        std::cout << "Error: invalid input" << std::endl;
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        return ; 
    }
    index--;
    std::cout << "first name = " << contacts[index].first_name << std::endl;
    std::cout << "last name = " << contacts[index].last_name << std::endl;
    std::cout << "nickname = " << contacts[index].nickname << std::endl;
    std::cout << "login = " << contacts[index].login << std::endl;
    std::cout << "postal address = " << contacts[index].postal_addr << std::endl;
    std::cout << "email address = " << contacts[index].email_addr << std::endl;
    std::cout << "phone number = " << contacts[index].phone_number << std::endl;
    std::cout << "birthday = " << contacts[index].birthday << std::endl;
    std::cout << "favorite meal = " << contacts[index].fav_meal << std::endl;
    std::cout << "underwear color = " << contacts[index].color << std::endl;
    std::cout << "darkest secret = " << contacts[index].secret << std::endl;
}

void search_contacts(Contact *contacts)
{
    int index;

    index = 0;
    if (Contact::get_cont() < 1)
    {
        std::cout << "There are no contacts in the phonebook" << std::endl;
        return ;
    }
    while (index < Contact::get_cont())
    {
        print_index(index + 1);
        print_string(contacts[index].first_name);
        print_string(contacts[index].last_name);
        print_string(contacts[index].nickname);
        std::cout << std::endl;
        index++;
    }
    display_desired_contact(contacts);
    return ;
}

void add_new_contact(Contact *contacts)
{
    Contact new_cont;
    //int i = Contact::number_of_contacts;
    int i = Contact::get_cont();

    if (i > 9)
    {
        std::cout << "The phonebook is full :(" << std::endl;
        return ;
    }
    std::cin.ignore();
    std::cout << "Enter first name: ";
    getline(std::cin, new_cont.first_name);
    std::cout << "Enter last name: ";
    getline(std::cin, new_cont.last_name);
    std::cout << "Enter nickname: ";
    getline(std::cin, new_cont.nickname);
    std::cout << "Enter login: ";
    getline(std::cin, new_cont.login);
    std::cout << "Enter postal address: ";
    getline(std::cin, new_cont.postal_addr);
    std::cout << "Enter email address: ";
    getline(std::cin, new_cont.email_addr);
    std::cout << "Enter phone number: ";
    getline(std::cin, new_cont.phone_number);
    std::cout << "Enter birthday date: ";
    getline(std::cin, new_cont.birthday);
    std::cout << "Enter favorite meal: ";
    getline(std::cin, new_cont.fav_meal);
    std::cout << "Enter underwear color: ";
    getline(std::cin, new_cont.color);
    std::cout << "Enter darkest secret: ";
    getline(std::cin, new_cont.secret);
    contacts[i] = new_cont;
    //Contact::number_of_contacts++;
    Contact::increment();
}

int main()
{
    std::string input;
    Contact contacts[10];

    while(true)
    {
        std::cout << "Input command: ";
        std::cin >> input;
        if (input == "EXIT")
            return 0;
        else if (input == "ADD")
        {
            add_new_contact(contacts);
        }
        else if (input == "SEARCH")
        {
            search_contacts(contacts);
        }
    }
}