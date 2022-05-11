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
	getline(std::cin >> std::ws, name);
	c.set_name(name);
	std::cout << "PLEASE ENTER LAST NAME" << std::endl;
	getline(std::cin >> std::ws, lname);
	c.set_last_name(lname);
	std::cout << "PLEASE ENTER NICKNAME" << std::endl;
	getline(std::cin >> std::ws, nname);
	c.set_nickname(nname);
	std::cout << "PLEASE ENTER PHONE NUMBER" << std::endl;
	getline(std::cin >> std::ws, phnumber);
	c.set_phone_number(phnumber);
	std::cout << "PLEASE ENTER DARKEST SECRET" << std::endl;
	getline(std::cin >> std::ws, dsecret);
	c.set_secret(dsecret);
}



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
			phonebook.set_information(contact);
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
