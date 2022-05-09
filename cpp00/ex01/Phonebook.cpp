#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::set_information(Contact c)
{
	if(full == false)
	{
		this->contact[this->index].set_name(c.get_name());
		this->contact[this->index].set_last_name(c.get_last_name());
		this->contact[this->index].set_nickname(c.get_nickname());
		this->contact[this->index].set_phone_number(c.get_phone_number());
		this->contact[this->index].set_secret(c.get_darkest_secret());
//		this->index += 1;
		if(this->index == 8)
			full = true;
	}
	else
		std::cout << "ERROR" << std::endl;
}

void	Phonebook::get_information(void)
{
	this->contact[this->index].get_name(); 
	std::cout << std::endl;
	this->contact[this->index].get_last_name(); 
	std::cout << std::endl;
	this->contact[this->index].get_nickname(); 
	std::cout << std::endl;
	this->contact[this->index].get_phone_number(); 
	std::cout << std::endl;
	this->contact[this->index].get_darkest_secret(); 
	std::cout << std::endl;
}

void	display_search(void)
{

