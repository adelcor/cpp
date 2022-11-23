/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:04:17 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/23 10:21:23 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hit_pts;
		unsigned int _energy_pts;
		unsigned int _attack_dmg;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);

		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &src);

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


