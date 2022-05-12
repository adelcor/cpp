#include "Zombie.hpp"


Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << " Has died. Again." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string name)
{
	_name = name;
}
