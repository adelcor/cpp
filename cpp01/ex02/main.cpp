#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "ADRESS OF string: " << &string << std::endl;
	std::cout << "ADRESS OF stringPTR: " << stringPTR << std::endl;
	std::cout << "ADRESS OF stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;

	return(0);
}

