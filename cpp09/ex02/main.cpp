#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
		{
			std::cout << "Error argc" << std::endl;
			exit(0);
		}


		PmergeMe test;
		test.exec(++argv);
	}

	catch(std::exception &e)
	{
		std::cout << "Error " << e.what() << std::endl;
	}

	return(0);
}

