/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:27:05 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 10:11:17 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("default")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if(this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void  Animal::makeSound(void)const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

std::string Animal::getType(void)const
{
	return(this->_type);
}

