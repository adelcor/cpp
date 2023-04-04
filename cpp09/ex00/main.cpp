#include "BitcoinExchange.cpp"

int main(int, char **argv)
{
	

	BitcoinExchange test;
	try
	{
	test.exec(argv[1]);
	}
	catch(std::exception& e)
	{
		std::cout << "Error " << e.what() << std::endl;
	}
//	test.get_map();

//	for(auto const& pair : test._map)
//	{
//		std::cout << pair.first << ": " << pair.second << std::endl;
//	}

	return(0);
}

