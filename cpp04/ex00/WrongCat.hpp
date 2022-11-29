/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:10:01 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/24 17:10:10 by adel-cor         ###   ########.fr       */
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

