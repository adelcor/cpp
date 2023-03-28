#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange::BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	this->map = copy.map;
	return *this;
}
BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::read_database()
{
	std::ifstream	database("data.csv");
	std::string	buffer;
