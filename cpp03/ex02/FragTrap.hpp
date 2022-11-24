/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:30:17 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/23 12:34:51 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);

		virtual ~FragTrap();

		FragTrap &operator=(const FragTrap &src);
		void highFiveGuys(void);
};

#endif
