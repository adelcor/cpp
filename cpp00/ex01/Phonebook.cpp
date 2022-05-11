#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
	index = 0;
}

Phonebook::~Phonebook()
{
}
void	Phonebook::set_index(int i)
{
	this->index = i;
}
int		Phonebook::get_index(void)
{
	return(this->index);
}
Contact Phonebook::get_contact(int i)
{
	return(contact[i]);
}

void	Phonebook::set_information(Contact c)
{
		int	pos;
		pos = this->index;

		this->contact[pos].set_name(c.get_name());
		this->contact[pos].set_last_name(c.get_last_name());
		this->contact[pos].set_nickname(c.get_nickname());
		this->contact[pos].set_phone_number(c.get_phone_number());
		this->contact[pos].set_secret(c.get_darkest_secret());

		if(this->index ==  7)
			this->full = true;

	
}

void	Phonebook::get_information(void)
{
	int i;
	i = this->index;

	std::string test = this->contact[i].get_name(); 
	std::cout << this->contact[i].firstname << std::endl;
	this->contact[i].get_last_name(); 
	std::cout << std::endl;
	this->contact[i].get_nickname(); 
	std::cout << std::endl;
	this->contact[i].get_phone_number(); 
	std::cout << std::endl;
	this->contact[i].get_darkest_secret(); 
	std::cout << std::endl;
}

void	Phonebook::display_search(void)
{
	if (index < 0)
	{
		std::cout << "Your Phonebook is empty. Please add one contact" << std::endl;
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10) << "Index" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "First Name" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "Last Name" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << "|" << std::endl;
	}
}


