#include "Contact.hpp"
#include "Phonebook.hpp"

void ft_menu(void)
{
	std::cout << "\x1B[2J\x1B[H\n";
	std::cout << "WELCOME" << std::endl;
}

int check_phone(std::string phone)
{
	int x;

	x = 0;
	while(phone[x])
	{
		if(isdigit((int)(phone[x])) == 0)
			return(1);
		x++;
	}
	return(0);
}

void	ft_show_time(Phonebook *p)
{
	int index;
	std::string	input;
	ft_menu();
	p->display_search();
	
	do
	{
		std::cin >> input;
		index = std::atoi(input.c_str());
	} while (check_phone(input) == 1);

	if (input == "0")
		return;
	if(index <= p->get_content())
		p->get_contact(index - 1).show_contact();
	else
		std::cout << "No contact with this index. Enter any key to continue";
	std::cin >> input;

}
void	ft_add_contact(Phonebook *p)
{
	Contact c;
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
	do
	{
	std::cout << "PLEASE ENTER PHONE NUMBER" << std::endl;
	getline(std::cin >> std::ws, phnumber);
	c.set_phone_number(phnumber);
	} while(check_phone(phnumber) == 1);
	std::cout << "PLEASE ENTER DARKEST SECRET" << std::endl;
	getline(std::cin >> std::ws, dsecret);
	c.set_secret(dsecret);
	p->set_information(c);
}



int main(void)
{
	Phonebook  p;
	Contact	c;
	std::string	input;
	bool pos = true;

	while(pos)
	{
		ft_menu();
		std::cout << "ADD-->to add a contact, SEARCH-->to search a contact, EXIT-->to finish" << std::endl;
		std::cin >> input;
		if(input == "ADD")
		{
			ft_add_contact(&p);
		}
		if(input == "SEARCH")
			ft_show_time(&p);

		if(input == "EXIT")
			pos = false;
		
	}
	std::cout << "END" << std::endl;
	return(0);
}
