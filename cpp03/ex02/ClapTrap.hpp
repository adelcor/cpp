/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:22:18 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/23 12:28:47 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hit_pts;
		unsigned int _energy_pts;
		unsigned int _attack_dmg;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);

		virtual ~ClapTrap();

		ClapTrap &operator=(const ClapTrap &src);

		virtual void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
