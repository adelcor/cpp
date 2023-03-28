#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>


class	BitcoinExchange
{
	private:
		std::map<std::string, float> map;
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
		
		void	read_database();

