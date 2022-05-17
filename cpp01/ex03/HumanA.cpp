#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
	std::cout << this->name <<" joined the battlefield and grabbed a " << this->_weapon.getType() << " to fight." << std::endl;
}

HumanA::~HumanA(void)
{

