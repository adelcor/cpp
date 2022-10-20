#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_delete = 0;
	this->_full = false;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void	Phonebook::set_information(void)
{
	std::string input;
	if (this->_delete == 7)
		this->_delete = 0;
	if (this->_full == false)
	{
		std::cout  << "This is your contact #" << this->_index + 1 << std::endl;
		if (this->_contacts[this->_index].set_contact() == true)
		{
			if (this->_index == 7)
				this->_full = true;
			else
				this->_index++;
		}
	}
	else
	{
		std::cout << "Your phonebook is full.\nIf you want to add a new contact, i am going to delete the first contact i stored, index #1." << std::endl;
		std::cout << "If you want to proceed, press '1' and confirm with 'enter',\nif not press anything but '1' and confirm with 'enter' to go back to main menu." << std::endl;
		std::cout << "Your choice: ";
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		else if (input.compare("1") == 0)
		{
				this->_contacts[this->_delete].set_contact();
				this->_delete++;
		}
		else
			std::cout << "Back to main menu without deleting and creating a contact." << std::endl;
	}
}

void	Phonebook::get_information() const
{
	int	index;
	int i = 1;

	if (this->_index == 0)
		std::cout << "Please add at least one contact before searching" << std::endl;
	else
	{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			while(i < 9)
			{
			this->_contacts[i- 1].get_contact(i);
			i++;
			}
			std::cout << "|-------------------------------------------|" << std::endl;
		std::string input;
		std::cout << "Please tell me which contact index i should show you. (0 to quit searching)\nIndex: ";
		while (!(std::getline(std::cin, input)) || input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0 || (std::atoi(input.c_str()) -1 >= this->_index && this->_full == false))
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "\033[31mOnly digits in range of 1 to 8 are allowed.\033[0m\n";
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
			else if (std::atoi(input.c_str()) - 1 >= this->_index && this->_full == false)
			{
				std::cout << "\033[33mYou only have " << this->_index << " Contacts saved.\033[0m" << std::endl;
				std::cin.clear();
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
		}
		index = std::atoi(input.c_str());
		if (index > 0)
			this->_contacts[index - 1].print_contact();
		else
			std::cout << "Exiting search mode now." << std::endl;
	}
}

void	Phonebook::show_instruction(void)
{
	std::cout  << "Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
}


