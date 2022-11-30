/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:34:02 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/30 09:52:13 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(): _name("")
{
	std::cout << "Character Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
    {
       _materias[i] = NULL;
    }
}

Character::Character(std::string const name): _name(name)
{
	std::cout << "Character Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
    {
        _materias[i] = NULL;
    }
}

Character::Character( const Character & src )
{
	std::cout << "Character copy constructor called" << std::endl;
	for(int i = 0; i < 4; i++)	
	{
		this->_materias[i] = src._materias[i] ? src._materias[i]->clone() : NULL;
	}
	this->_name = src._name;
}


Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
        {
            delete (this->_materias[i]);
        }
    }
}



Character &				Character::operator=( Character const & rhs )
{
	std::cout << "MateriaSource Assignation Operator called" << std::endl;
	if (this != &rhs)
    	{
        	this->_name = rhs._name;
        	for (int i = 0; i < 4; i++)
        	{
            	if (rhs._materias[i])
            	{
                	if (this->_materias[i])
                	{
                    	delete (this->_materias[i]);
                	}
                	this->_materias[i] = rhs._materias[i]->clone();
            	}
        	}
    	}
    return *this;

}



void					Character::equip(AMateria *m)
{
	bool equipped = false;
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i])
        {
            this->_materias[i] = m;
            equipped = true;
            break;
        }
    }
    if (!equipped)
    {
        std::cout << "There is no space for materia." << std::endl;
    }
}

void					Character::unequip(int idx)
{
	if (!this->_materias[idx])
	{
		std::cout << "There is no Materia to unequip" << std::endl;
	}
	else
	{
		this->_materias[idx] = NULL;
	}
}

void					Character::use(int idx, ICharacter& target)
{
	if(!this->_materias[idx] || idx > 4)
	{
		std::cout << idx << std::endl;
		std::cout << "There is no Materia in slot" << std::endl;
	}
	else
	{
		this->_materias[idx]->use(target);
	}
}


std::string const 		&Character::getName() const
{
	return this->_name;
}
