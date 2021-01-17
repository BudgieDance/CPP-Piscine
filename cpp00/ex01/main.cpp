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
	std::cin.ignore();
	contacts[index].print_params();
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
		print_string(contacts[index].get_first_name());
		print_string(contacts[index].get_last_name());
		print_string(contacts[index].get_nickname());
		std::cout << std::endl;
		index++;
	}
	display_desired_contact(contacts);
	return ;
}

void add_new_contact(Contact *contacts)
{
	Contact new_cont;
	int i = Contact::get_cont();

	if (i > 7)
	{
		std::cout << "The phonebook is full :(" << std::endl;
		return ;
	}
	new_cont.set_params();
	contacts[i] = new_cont;
	Contact::increment();
}

int main()
{
	std::string input;
	Contact contacts[8];

	while(true)
	{
		std::cout << "Input command: ";
		if (getline(std::cin, input))
		{
			if (input == "EXIT")
				return 0;
			else if (input == "ADD")
				add_new_contact(contacts);
			else if (input == "SEARCH")
				search_contacts(contacts);
			else
				std::cout << "Please provide a valid command(choose from: ADD, SEARCH, and EXIT)" << std::endl;
		}
	}
}
