#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Constructor for " << this->_name << " called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << this->_name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}

