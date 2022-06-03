#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:

		WrongCat();
		WrongCat(const WrongCat &copy);

		~WrongCat();

		WrongCat &operator=(const WrongCat &src);

		void makeSound(void)const;
};

#endif

