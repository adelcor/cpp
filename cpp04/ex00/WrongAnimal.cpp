/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:08:58 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/24 17:09:39 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("wrong_default")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if(this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void WrongAnimal::makeSound(void)const
{
	std::cout << this->getType() << " says: **WrongAnimal sounds**" << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}

