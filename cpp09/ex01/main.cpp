#include "RPN.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Error: No input" << std::endl;
		return(0);
	}

	try
	{
		RPN rpn;
		rpn.exec(argv[1]);
	}

	catch(std::exception& e)
	{
		std::cout << "Error " << e.what() << std::endl;
	}

	return(0);
}

