/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:09:08 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/30 09:38:20 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = src._materias[i] ? src._materias[i]->clone() : NULL;
	}

}


MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
		{
			delete (this->_materias[i]);
		}
	}
}




MateriaSource 	&MateriaSource::operator=( MateriaSource const & rhs )
{
	std::cout << "MateriaSource Assignation Operator called" << std::endl;

	if(this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materias[i])
			{
				if(this->_materias[i])
				{
					delete (this->_materias[i]);
				}
				this->_materias[i] = rhs._materias[i]->clone();
			}
		}
	}
	return *this;
}



void						MateriaSource::learnMateria(AMateria *m)
{
	bool learned = false;
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i])
        {
            this->_materias[i] = m;
            learned = true;
            break;
        }
    }
    if (!learned)
    {
        std::cout << "There is no space for more materia." << std::endl;
    }
}

AMateria					*MateriaSource::createMateria(std::string const & type)
{
	AMateria *m;
    if (type == "ice")
    {
        m = new Ice();
		return m;
    }
    else if (type == "cure")
    {
        m = new Cure();
		return m;
    }
	else
		return (0);

	for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i] && this->_materias[i]->getType() == type)
				return this->_materias[i]->clone();
		}	
	return NULL;

}
