#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &copy)
{
	this->_num_stack = copy._num_stack;
	this->_element = copy._element;
}

RPN& RPN::operator=(const RPN &copy)
{
	this->_num_stack = copy._num_stack;
	this->_element = copy._element;
	return *this;
}

RPN::~RPN()
{
}

bool	RPN::is_operand()
{
		if(this->_element == "+")
			return true;
		else if(this->_element == "-")
			return true;
		else if(this->_element == "*")
			return true;
		else if(this->_element == "/")
			return true;
		else
			return false;
}

void	RPN::operand_handler()
{
	int	number_one;
	int number_two;
	int	result;

	if(this->_num_stack.size() < 2)
	{
//		std::cout << "Error: Insuficient operands for execute" << std::endl;
		throw RPN::InsuficientOperandsException();
	}
	number_two = this->_num_stack.top();
	this->_num_stack.pop();
	number_one = this->_num_stack.top();
	this->_num_stack.pop();
	if(this->_element == "+")
		result = number_one + number_two;
	else if(this->_element == "-")
		result = number_one - number_two;
	else if(this->_element == "*")
		result = number_one * number_two;
	else if(this->_element == "/")
	{
		if(number_two == 0)
		{
//			std::cout << "Error: Division by zero equals infinity" << std::endl;
			throw RPN::DivisionByZeroException();
		}
		else
			result = number_one / number_two;
	}
	this->_num_stack.push(result);
}

void	RPN::number_handler()
{
	std::istringstream convert(this->_element);
	int	num;
	
	for(std::string::iterator it = this->_element.begin(); it != this->_element.end(); ++it)
	{
		if(!std::isdigit(*it))
		{
			if(*it == '-' && (it == this->_element.begin()) && this->_element.size() > 1)
				continue;
			else
			{
//				std::cout << "Error: bad input." << std::endl;
				throw RPN::BadInputException();
			}
		}
	}
	convert >> num;
	if(num > 9 || num < MIN_VALUE)
	{
//		std::cout << "Error: number too high or too low" << std::endl;
		throw RPN::NumberTooHighOrTooLowException();
	}
	this->_num_stack.push(num);
}



void	RPN::exec(const char* input)
{
	std::istringstream	input_stream(input);
	
	while(input_stream >> this->_element)
	{
		if(is_operand())
			operand_handler();
		else
			number_handler();
	}

	if (this->_num_stack.size() != 1)
	{
//		std::cout << "Error: invalid input" << std::endl;
		throw RPN::InvalidInputException();
	}

	std::cout << this->_num_stack.top() << std::endl;
}

const char *RPN::InsuficientOperandsException::what(void) const throw()
{
	return("Insufficient Operands");
}

const char *RPN::DivisionByZeroException::what(void) const throw()
{
	return("Division by Zero");
}

const char *RPN::BadInputException::what(void) const throw()
{
	return("Bad Input");
}

const char *RPN::NumberTooHighOrTooLowException::what(void) const throw()
{
	return("Number Too High or Too Low");
}

const char *RPN::InvalidInputException::what(void) const throw()
{
	return("Invalid Input");
}


				









