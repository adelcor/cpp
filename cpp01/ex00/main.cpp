/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:25:50 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/25 12:39:05 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie *zombie;
	zombie = newZombie("Aingeru");
	randomChump("Iñaki");
	delete(zombie);
	return(0);
}
