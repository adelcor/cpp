/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:27:19 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/23 12:19:41 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "### TEST ###\n" << std::endl;
	

	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	ClapTrap a;
	ClapTrap b("Buffalo");

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.attack("other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Buffalo-clone");
	b.beRepaired(3);
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

	
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ScavTrap c;
		ScavTrap d("Savage");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	
	return(0);
}

