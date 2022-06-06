#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &ccopy);

		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal  &src);

		void makeSound(void)const;
		std::string getType(void)const;
};
#endif
