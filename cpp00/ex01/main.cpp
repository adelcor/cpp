#include "Contact.hpp"

int main(void)
{
	Contact paco;
	std::string	input;
	bool pos = true;

	while(pos)
	{
		std::cout << "WELCOME" << std::endl;
		std::cin >> input;
		if(input == "ADD")
		{
			paco.set_name();
		}
		if(input == "EXIT")
			pos = false;
		
	}
	std::cout << "END" << std::endl;
	paco.get_name();
	return(0);
}
