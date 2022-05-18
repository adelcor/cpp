#include "Karen.hpp"

int main(void)
{
	Karen karen;

	std::cout << "Karen can say:" << std::endl;
	karen.complain("ERROR");
	std::cout << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl;
	karen.complain("something else");
	std::cout << std::endl;
	std::cout << "Try to make Karen say something. You have 5 chances. Good Luck!" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "input: ";
		std::string input;
		getline(std::cin, input);
		if(std::cin.eof() == true)
		{
			std::cerr << "D" << std::endl;
			exit(EXIT_FAILURE);
		}
		karen.complain(input);
		std::cout << std::endl;
	}
	return(EXIT_SUCCESS);
}

