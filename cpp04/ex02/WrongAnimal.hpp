/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:18:54 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 10:15:16 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &ccopy);

		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal  &src);

		void makeSound(void)const;
		std::string getType(void)const;
};
#endif
