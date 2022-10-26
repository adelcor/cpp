/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:50:56 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/25 13:21:08 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].set_name(name + std::to_string(i));
	return(horde);
}
	
