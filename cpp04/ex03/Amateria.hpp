#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const &src);
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &rhs);:wq

