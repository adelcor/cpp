/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:19:30 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 10:15:24 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:

		WrongCat();
		WrongCat(const WrongCat &copy);

		~WrongCat();

		WrongCat &operator=(const WrongCat &src);

		void makeSound(void)const;
};

#endif

