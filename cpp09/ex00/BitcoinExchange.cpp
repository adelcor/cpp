#include "BitcoinExchange.hpp"
#include <fstream>

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	this->_map = copy._map;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	this->_map = copy._map;
	return *this;
}
BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::init_database(const char* filename )
{
	std::ifstream	database(filename);
	std::string	buffer;

	if(database.is_open())
		std::cout << "database is open correctly\n";
	else
		throw std::exception();

	std::getline(database, buffer);

	while (std::getline(database, buffer))
	{
		std::stringstream line_stream(buffer);
		std::string date;
		std::string rate;
		std::getline(line_stream, date, ',');
		std::getline(line_stream, rate, ',');
		this->_map[date] = std::stod(rate);
	}
	
	database.close();

	if(database.fail())
		throw std::exception();
	else
		std::cout << "database is closed correctly\n";
}

void BitcoinExchange::exec(const char* filename)
{
	if(filename)
	{
		this->init_database("data.csv");
		this->init_input(filename);
	}
	else
		exit(0);

}

void BitcoinExchange::get_map()
{
	std::map<std::string, float>::iterator it;

	for(it = this->_map.begin(); it != this->_map.end(); it++)
	{
		std::string key = it->first;
		float value = it->second;
		std::cout << key << ": " << value << std::endl;
	}

}



