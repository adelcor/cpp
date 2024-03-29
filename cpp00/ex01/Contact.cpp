/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:23:23 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/21 14:22:06 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields_name[5] =
{
	"First name",
	"Last Name",
	"NickName",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}

Contact::~Contact()
{
}

bool	Contact::set_contact()
{

	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";

		while ( !(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0 || i == PhoneNumber)
		{

			if(std::cin.eof() == true)
			{
				std::cout << "You Pressed D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0 && i != PhoneNumber)
			{
				this->_informations[i].clear();
				std::cout << "Empty contact information not allowed." << std::endl;
				std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
			}
			if(i == PhoneNumber)
			{
				bool digit = true;

				for(unsigned long z = 0; z < this->_informations[i].length(); z++)
				{
					if(isdigit(this->_informations[i][z]) == 0)
						digit = false;
				}

				if(this->_informations[i].length() == 0)
				{
					digit = false;
				}
				
				if(digit == false)
				{
					this->_informations[i].clear();
					std::cout << "Only numbers, please" << std::endl;
					std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
				}
			
				else
				{
				i++;
				std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
				}
				
			}
			

		}
	
	}
	std::cout << "Contact added succesfully." << std::endl;
	return (true);
}

void Contact::get_contact(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->_informations[i].length() > 10)
			std::cout << this->_informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_informations[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::print_contact(void) const
{
	for(int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << this->_fields_name[i];
		std::cout << ": ";
		std::cout << this->_informations[i];
		std::cout << std::endl;
	}
}
