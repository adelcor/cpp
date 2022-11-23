/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:37:57 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/23 13:57:38 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

FragTrap::FragTrap(unsigned int energy_points, std::string name) : ClapTrap(name + "clap_name")
{
	this->_hit_pts = 100;
	this->_energy_pts = energy_points;
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


void    FragTrap::attack(const std::string &target)
{
    if (this->_energy_pts > 0 && this->_hit_pts > 0)
    {
        std::cout << "Fragtrap " << this->_name << " attacks " << target << ", causing " << this->_energy_pts-- << std::endl;
    }
    else if (this->_energy_pts == 0)
        std::cout << "\033[31mFragtrap " << this->_name << " is not able to attack " << target << ", because he has no energy points left.\033[0m" << std::endl;
    else
        std::cout << "\033[31mFragtrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
}


void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}

