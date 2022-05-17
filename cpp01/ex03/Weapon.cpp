#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}


Weapon::~Weapon()
{
	std::cout << this->getType() << "is broken." << std::endl;}

std::string Weapon::getType() const
{
	return(_type);
}

void Weapon::setType(const std::string &weapon)
{
	_type = weapon;
}



