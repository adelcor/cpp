#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
	index = -1;
	content = 0;
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
int		Phonebook::get_content(void)
{
	return(content);
}
Contact Phonebook::get_contact(int i)
{
	return(contact[i]);
}

void	Phonebook::set_information(Contact c)
{
		int	pos;
		if(index == -1 || index == 8)
			set_index(0);
		pos = get_index();

		this->contact[pos].set_name(c.get_name());
		this->contact[pos].set_last_name(c.get_last_name());
		this->contact[pos].set_nickname(c.get_nickname());
		this->contact[pos].set_phone_number(c.get_phone_number());
		this->contact[pos].set_secret(c.get_darkest_secret());
		set_index(pos + 1);
		if (content < 8)
			content++;
}



	


/*void	Phonebook::get_information(void)
{
//	int i;
//	i = this->index;

	std::string tname = this->contact.get_name(); 
	std::cout << tname << std::endl;
	std::string tlname = this->contact.get_last_name(); 
	std::cout << tlname << std::endl;
	std::string tnname = this->contact.get_nickname(); 
	std::cout << tnname << std::endl;
	std::string tphone = this->contact.get_phone_number(); 
	std::cout << tphone << std::endl;
	std::string tsecret = this->contact.get_darkest_secret(); 
	std::cout << tsecret << std::endl;
}*/

void	Phonebook::display_search(void)
{
	if (index < 0)
	{
		std::cout << "Your Phonebook is empty. Please add one contact" << std::endl;
		std::cout << "Please press 0 to continue..." << std::endl;
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10) << "Index" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "First Name" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "Last Name" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << "|" << std::endl;
		for (int i = 0; i <= content -1; i++)
		{
			std::cout << std::right << std::setw(10) << (i + 1) << '|';
			contact[i].tostring();
			std::cout << std::endl;
		}
		std::cout << "Enter contact's index number:";

	}
}


