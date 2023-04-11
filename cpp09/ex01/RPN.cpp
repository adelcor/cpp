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

void	RPN::exec(const char* input)
{
	std::istringstream input_stream(input);

	while(ss >> this->_element)
	{
		if(this->_element == "+" || this->_element == "-" || this->_element == "/" || this->element == "*")
		{
			if(this->_num_stack.size() < 2)
			{
				std::cout << "Error: Insuficient operands for execute" << std::endl;
				throw std::exception();
			}



}

