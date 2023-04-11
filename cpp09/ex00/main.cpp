#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "the program needs one argument\n";
		return(0);
	}
	
	BitcoinExchange BitCoin;

	try
	{
	BitCoin.exec(argv[1]);
	}
	catch(std::exception& e)
	{
		std::cout << "Error " << e.what() << std::endl;
	}

	return(0);
}

