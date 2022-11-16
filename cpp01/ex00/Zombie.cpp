/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:09:40 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/03 12:34:09 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

