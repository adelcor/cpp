#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

#define	MIN_VALUE -2147483647

class RPN
{
	private:
		std::stack<int> _num_stack;
		std::string	_element;
	
	public:
		RPN();
		RPN(const RPN &copy);
		RPN &operator=(const RPN &copy);
		~RPN();
		void	exec(const char *input);
		void	operand_handler();
		bool	is_operand();

};





























#endif
