#include "Contact.hpp"
#include "Phonebook.hpp"

void	ft_add_contact(Contact c)
{
	std::string name;
	std::string lname;
	std::string nname;
	std::string phnumber;
	std::string dsecret;
	
	std::cout << "PLEASE ENTER NAME" << std::endl;
	getline(std::cin << std:ws, name);
	std::cout << "PLEASE ENTER LAST NAME" << std::endl;
	getline(std::cin << std:ws, lname);
	std::cout << "PLEASE ENTER NICKNAME" << std::endl;
	getline(std::cin << std:ws, nname);
	std::cout << "PLEASE ENTER PHONE NUMBER" << std::endl;
	getline(std::cin << std::ws, phnumber);



int main(void)
{
	Phonebook  phonebook;
	Contact	contact;
	std::string	input;
	bool pos = true;

	while(pos)
	{
		std::cout << "WELCOME" << std::endl;
		std::cin >> input;
		if(input == "ADD")
		{
			ft_add_contact(contact);
		}
		if(input == "SEARCH")
			phonebook.display_search();

		if(input == "EXIT")
			pos = false;
		
	}
	std::cout << "END" << std::endl;
	phonebook.get_information();
	return(0);
}
