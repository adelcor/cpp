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

}

std::string Animal::getType(void)const
{
	return(this->_type);
}

