#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

class Animal
{
	protected:
		std::string _type;
		Animal();

	public:
		
		Animal(const Animal &copy);

		virtual ~Animal();

		Animal &operator=(const Animal &src);

		virtual void makeSound(void)const = 0;

		std::string getType(void)const;
};

#endif

