/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seriatron.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:16:26 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/07 18:21:52 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seriatron.hpp"

Seriatron::Seriatron()
{
	std::cout << "Seriatron Default Constructor called" << std::endl;
}

Seriatron::Seriatron(const Seriatron &src)
{
	std::cout << "Seriatron Copy Constructor called" << std::endl;
	*this = src;
}


Seriatron::~Seriatron()
{
	std::cout << "Seriatron Deconstructor called" << std::endl;
}


Seriatron &Seriatron::operator=(const Seriatron &src)
{
	std::cout << "Seriatron Assignation operator called" << std::endl;
	if (this == &src)
		return *this;


	return *this;
}


uintptr_t	Seriatron::serialize(Data *ptr)
{
	try
	{
		if(!ptr)
			throw(Seriatron::NoPointerException());
		else
			return (reinterpret_cast<uintptr_t>(ptr));
	}
	catch(const std::exception &e)
    {
        std::cerr << "Exiting now because " << e.what() << std::endl;
        exit(0);
    }
	
}

Data	*Seriatron::unserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

const char *Seriatron::NoPointerException::what(void) const throw()
{
	return ("No pointer assigned");
}
