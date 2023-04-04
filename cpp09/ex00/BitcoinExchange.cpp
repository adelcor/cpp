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

	if(database.is_open())
		throw std::exception();
	else
		std::cout << "database is closed correctly\n";
}

void	BitcoinExchange::parse_input(std::ifstream &input)
{
	std::string buffer;
	std::getline(input, buffer);
	std::cout << "la segunda linea es: " << buffer << std::endl;
}

void	BitcoinExchange::init_input(const char *filename)
{
	std::ifstream	input(filename);
	if(input.good())
		std::cout << "input data file open correctly" << std::endl;
	else
	{
		std::cerr << "input data file cannot be opened correctly or does not exist" << std::endl;
		throw std::exception();
	}

	std::string first_line;
	std::getline(input, first_line);
	std::cout << first_line << std::endl;
	if(first_line.compare("date | value"))
	{
		std::cerr << "Error in format: First line has to be 'date | value'" << std::endl;
		throw std::exception();
	}
	parse_input(input);


}



void 	BitcoinExchange::exec(const char* filename)
{
	if(filename)
	{
		this->init_input(filename);
		this->init_database("data.csv");
	}
	else
		exit(0);

}

void 	BitcoinExchange::print_map()
{
	std::map<std::string, float>::iterator it;

	for(it = this->_map.begin(); it != this->_map.end(); it++)
	{
		std::string key = it->first;
		float value = it->second;
		std::cout << key << ": " << value << std::endl;
	}

}

std::map<std::string, float>	BitcoinExchange::get_map()
{
	return this->_map;
}



