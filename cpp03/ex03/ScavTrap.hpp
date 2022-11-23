/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:31:15 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/23 12:32:07 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool _guarding_gate;
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);

		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &src);

		void attack(std::string const &target);
		void guardGate(void);
};

#endif
