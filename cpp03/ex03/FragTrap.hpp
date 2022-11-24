/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:32:49 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/23 13:57:07 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);

		~FragTrap();

		FragTrap &operator=(const FragTrap &src);
		void highFiveGuys(void);
};

#endif
