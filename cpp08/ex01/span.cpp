/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:13:10 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/16 14:23:34 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0), _pos(0)
{
}

Span::Span(unsigned int N): _size(N), _pos(0)
{
	std::cout << "Span Constructor for size of " << N << " called" << std::endl;
	this->_vault.reserve(this->getSize());
}

Span::Span(const Span &src): _size(src.getSize()), _pos(src.getPos())
{
	std::cout << "Span Copy Constructor called" << std::endl;
	*this = src;
}

Span::~Span()
{
	std::cout << "Span Deconstructor called" << std::endl;
}

Span	&Span::operator=(const Span &src)
{
	std::cout << "Span Assignation operator called" << std::endl;
	if (this != &src)
	{
		this->_size = src._size;
		this->_pos = src._pos;
		copy(src._vault.begin(), src._vault.end(), back_inserter(this->_vault));
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if ((this->_pos != 0 && this->_vault.empty() == true) || this->_vault.max_size() < this->getSize())
		throw (Span::VectorInvalidException());
	if (this->getPos() + 1 > this->getSize())
		throw (Span::ArrayFullException());
	else
	{
		this->_pos++;
		this->_vault.push_back(number);
	}
}

void	Span::addNumber(unsigned int limit, time_t chronos )
{
	srand(chronos);
	for (size_t i = 0; i < limit; i++)
	{
		try
		{
			addNumber(rand());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

}

unsigned int	Span::shortestSpan(void) const
{
	if(this->_pos == 0)
		throw (Span::ArrayEmptyException());
	
	if (this->_pos == 1 || this->_vault.size() == 1)
		throw (Span::ComparisonInvalidException());

	std::vector<int> clone(this->_vault);		

	std::sort (clone.begin(), clone.end());	

	unsigned int snowmobile = UINT_MAX;
	std::vector<int>::iterator temp = clone.begin();
	std::vector<int>::iterator temp_next = clone.begin() + 1;
	while (temp_next != clone.end())
	{
		if ((unsigned int)(*temp_next - *temp) < snowmobile)
			snowmobile = *temp_next - *temp;
		++temp_next;
		++temp;
	}
	return (snowmobile);
}

unsigned int	Span::longestSpan(void)const
{
	if(this->_pos == 0)
		throw (Span::ArrayEmptyException());

	if (this->_pos == 1 || this->_vault.size() == 1)
		throw (Span::ComparisonInvalidException());

	std::vector<int> clone(this->_vault);	
	int low_number;
	int high_number;

	std::sort (clone.rbegin(), clone.rend());	
	high_number = *clone.begin();

	std::sort (clone.begin(), clone.end());	
	low_number = *clone.begin();

	return (high_number - low_number);
}


unsigned int	Span::getSize() const
{
	return (this->_size);
}

unsigned int	Span::getPos() const
{
	return (this->_pos);
}




const char	*Span::VectorInvalidException::what() const throw()
{
	return ("Error : Invalid Vector");
}

const char	*Span::ArrayFullException::what() const throw()
{
	return ("Error : Array full");
}

const char	*Span::ArrayEmptyException::what() const throw()
{
	return("Error : Empty Array");
}

const char	*Span::ComparisonInvalidException::what() const throw()
{
	return ("Error: more than one element needed to be compared");
}
