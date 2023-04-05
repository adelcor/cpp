#include "BitcoinExchange.cpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "the program needs one argument\n";
		return(0);
	}
	
	std::map<std::string, float> mapa;
	BitcoinExchange test;
	try
	{
	test.exec(argv[1]);
	}
	catch(std::exception& e)
	{
		std::cout << "Error " << e.what() << std::endl;
	}
//	mapa = test.get_map();

//	for(auto const& pair : test._map)
//	{
//		std::cout << pair.first << ": " << pair.second << std::endl;
//	}

	return(0);
}

