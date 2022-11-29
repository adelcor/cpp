/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:34:41 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 11:48:11 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	std::cout << "AMateria copy Constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	std::cout << "AMateria Assignation operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}

std::string const &AMateria::getType()const
{
	return this->type;
}


