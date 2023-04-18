#include "BitcoinExchange.hpp"

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
		std::cout << CYAN_COLOR << "\nDatabase has been opened succesfully\n" << RESET_COLOR << std::endl;
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
		this->_map[date] = valid_float(rate);
	}
	
	database.close();

	if(database.is_open())
		throw std::exception();
	else
		std::cout << CYAN_COLOR << "Database has been closed succesfully\n" << CYAN_COLOR << std::endl;
}

void	BitcoinExchange::parse_input(std::ifstream &input)
{
	std::string	buffer;
		

	while(std::getline(input, buffer))
	{
		std::istringstream	line_parser(buffer);
		std::string		date;
		std::string		value;
		char 			splitter;
		float			number;
		double			bitcoin_value;


		if(!(line_parser >> date >> splitter >> value) || splitter != '|')
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue;
		}

		number = valid_float(value);
			

		if(!vali_date(date))
			std::cout << "Error: bad input => " << date << std::endl;


		else if(number < 0)
			std::cout << "Error: not a positive number." << std::endl;

		else if(number > 1000)
			std::cout << "Error: too large a number." << std::endl;

		else if(number <= 1000 && number > 0)
		{
			find_rate(date);
			if(this->_valid)
			{
				bitcoin_value = number * this->_rate;
				std::cout << date << " => " << number << " = ";
				std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2);
				std::cout << bitcoin_value << std::endl;
			}


		}
		else
			std::cout << "Error: bad input => " << date << std::endl;
	}
}




void	BitcoinExchange::init_input(const char *filename)
{
	std::ifstream	input(filename);
	std::string	first_line;

	if(input.good())
		std::cout << YELLOW_COLOR << "Input data file has been opened succesfully\n" << RESET_COLOR << std::endl;
	else
	{
		std::cerr << "Input data file cannot be opened correctly or does not exist" << std::endl;
		throw std::exception();
	}


	std::getline(input, first_line);

//	std::cout << first_line << std::endl;

	if(first_line.compare("date | value"))
	{
		std::cerr << "Error in format: First line has to be 'date | value'" << std::endl;
		throw std::exception();
	}

	parse_input(input);
	input.close();
	if(input.is_open())
		throw std::exception();
	else
		std::cout << YELLOW_COLOR "\nInput data file has been closed succesfully\n" << RESET_COLOR << std::endl;

}



void 	BitcoinExchange::exec(const char* filename)
{
	if(filename)
	{
		this->init_database("data.csv");
		this->init_input(filename);
	}
	else
	{	std::cerr << "Error in filename" << std::endl;
		throw std::exception();
	}

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

float	BitcoinExchange::get_rate()
{
	return this->_rate;
}

bool	BitcoinExchange::get_valid()
{
	return this->_valid;
}


bool	BitcoinExchange::has_thirty_days(int month)
{
	switch(month)
	{
		case 4:

		case 6:

		case 9:

		case 11:
			return true;

		default:
			return false;
	}
}


bool	BitcoinExchange::vali_date(const std::string& date)
{
	int			year;
	int			month;
	int			day;
	char			splitter_1;
	char			splitter_2;
	bool			leap_year;

	std::istringstream	line_reader(date);

	if(date.length() > 10)
		return false;

	line_reader >> year >> splitter_1 >> month >> splitter_2 >> day;



	if(line_reader.fail() || splitter_1 != '-' || splitter_2 != '-' ||
			year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;

	leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if((month == 2 && (leap_year ? day > 29 : day > 28)) || (has_thirty_days(month) && day > 30))
		return(false);
	return true;
}


float	BitcoinExchange::valid_float(const std::string& value)
{
	float	num;
	
	std::stringstream ss(value);
//	std::cout << "value es: " << value << std::endl;

	ss >> num;
//	std::cout << "number es :" << num << std::endl;

	return(num);
}



void	BitcoinExchange::find_rate(std::string& date) 
{
	bool last = false;
    	std::map<std::string, float>::iterator it = this->_map.lower_bound(date);

    	if(it == this->_map.end())
	{
		last = true;
		--it;
	}

	std::string result = it->first;
	this->_valid = true;	

	if (result.compare(date) == 0 || last) 
	{
		this->_rate = it->second;
//		std::cout << "rate es : " << this->_rate << std::endl;
	}
    
	else 
	{
		if (it != this->_map.begin()) 
	{ 
		--it;
		result = it->first;
		if(vali_date(result))
		{
			this->_rate = it->second;
//			std::cout << "rate es : " << this->_rate << std::endl;
		}

		else
		{
			std::cout << "Error: Bad Input => " << result << std::endl;
			this->_valid = false;
		}
	}
    	
	else 
	{
		std::cout << "A rate was not found for the specified date" << std::endl;
		this->_valid = false;
	}
    }
}










































