/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:48:49 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/24 14:46:28 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("defaultDT_clap_trap")
{
	this->_name = "defaultDT";
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap")
{
	this->_name = name;
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = 50;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "DiamondTrap Constructor for the name " << this->_name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor for " << this->_name << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = src._name + "_clap_trap";
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::get_hit_points(void)
{
	std::cout << this->_name << " " << this->_hit_pts << std::endl;
}

void 	DiamondTrap::get_energy_points(void)
{
	std::cout << this->_name << " " << this->_energy_pts << std::endl;
}

void	DiamondTrap::get_attack_dmg(void)
{
	std::cout << this->_name << "" << this->_attack_dmg << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am a DiamondTrap named " << this->_name <<
	" and i am originated from the ClapTrap named " << ClapTrap::_name << "." <<
	std::endl;
}
