#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
		{
			throw std::invalid_argument("argc");
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

