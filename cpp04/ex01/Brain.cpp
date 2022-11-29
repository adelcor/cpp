/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:30:30 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 10:02:59 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		if(src._ideas[i].length() > 0)
			this->_ideas[i].assign(src._ideas[i]);
	}
	return *this;
}

const std::string	Brain::getIdea(size_t i)const
{
	if (i < 100)
		return(this->_ideas[i]);
	else
		return ("\033[33mThere is only 100 ideas per brain.\033[0m");
}

const std::string *Brain::getIdeaAddress(size_t i)const
{
	if (i < 100)
	{
		const std::string	&stringREF = this->_ideas[i];
		return(&stringREF);
	}
	else
		return(NULL);
}

void	Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "\033[33mThere is only 100 ideas per brain.\033[0m" << std::endl;
}


