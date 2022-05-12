#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *Z;
	Z = new Zombie(name);
	Z->announce();
	return(Z);
}
