#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>
#include <map>
#include <sstream>


class	BitcoinExchange
{
	private:
		std::map<std::string, float>	_map;	
		float				_rate;
		bool				_valid;	
	
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
		bool	vali_date(const std::string& date);
		float	valid_float(const std::string& value);
		bool	has_thirty_days(int month);
		void	find_rate(std::string& date);
	
};

#endif
		


