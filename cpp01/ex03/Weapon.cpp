/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:31:49 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/25 17:14:58 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}

Weapon::~Weapon()
{
	std::cout << this->getType() << "is broken." << std::endl;
}

std::string const &Weapon::getType()
{
	return(_type);
}

void Weapon::setType(std::string weapon)
{
	_type = weapon;
}



