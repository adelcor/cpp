/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:28:58 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 10:00:19 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_brain = new Brain();
	if(this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called" <<std::endl;
	this->_type = copy._type;
	this->_brain = new Brain();
	if(this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->_brain = *copy._brain;
}

Cat::~Cat()
{
	delete(this->_brain);
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	this->_brain = new Brain();
	if(this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->_brain = *src._brain;
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Meeeoow**" << std::endl;
}

void Cat::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)
		std::cout << "\tIdea " << i << " of the Cat is: \"" << this->_brain->getIdea(i) << "\" at the adress " << this->_brain->getIdeaAddress(i) << std::endl;
}

void Cat::setIdea(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

