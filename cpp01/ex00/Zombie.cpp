#include "Zombie.hpp"


Zombie::Zombie(std::string s)
{
	_name = s;
	std::cout << "Hi! my name is " << _name << " I am a Zombie, do you see?" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " Has died. Again." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

