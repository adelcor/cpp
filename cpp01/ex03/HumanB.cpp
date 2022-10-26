/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:00:51 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/25 17:18:31 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_is_armed = false;
	std::cout << this->_name << "joined the battlefield." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " died." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	this->_is_armed = true;
	std::cout << this->_name << " grabbed a " << this->_weapon->getType() << " to figth with." << std::endl;
}
void HumanB::attack(void)
{
	if (this->_is_armed)
	{
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << "." << std::endl;
	}
	else
	{
		std::cout << this->_name << "attacks with his fists." << std::endl;
	}
}
