/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:38:21 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/30 09:27:41 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
	std::cout << "Cure Default Contructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure( const Cure & src )
{
	std::cout << "Cure Copy Contructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure Destroctor called" << std::endl;
}



Cure &				Cure::operator=( Cure const & rhs )
{
	std::cout << "Cure Assignation Operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}


AMateria			*Cure::clone() const
{
	AMateria *m = new Cure(*this);
	return m;
}

void				Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
