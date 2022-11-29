/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:41:47 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 13:30:26 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice()
{
	std::cout << "Ice Default Constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice( const Ice & src )
{
	std::cout << "Ice Copy Contructor called" << std::endl;
	*this = src;
}



Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}



Ice &				Ice::operator=( Ice const & rhs )
{
	std::cout << "Ice Assignation Operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}


AMateria			*Ice::clone() const
{
	AMateria *m = new Ice(*this);
	return m;
}

void				Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
