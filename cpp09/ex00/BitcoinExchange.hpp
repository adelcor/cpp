#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>
#include <map>
#include <sstream>


class	BitcoinExchange
{
	private:
		std::map<std::string, float>	_map;		
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		void	exec(const char *filename);
		void	init_database(const char* filename);
		void	init_input(const char* filename);
		void	print_map();
		std::map<std::string, float> get_map();
		void	parse_input(std::ifstream& input);
	
};

#endif
		


