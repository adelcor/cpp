/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:07:19 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/24 17:07:32 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if(this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: **Woof**" << std::endl;
}

