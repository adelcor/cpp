/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:07:54 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/03 12:47:47 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int 	main(void)
{
	Zombie *horde = zombieHorde(10, "Cristian");
	for(int i = 0; i < 10; i++)
		(horde + i)->announce();
	delete[] horde;
	return(0);
}
