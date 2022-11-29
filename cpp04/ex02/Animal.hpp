/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:16:13 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 10:13:57 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

class Animal
{
	protected:
		std::string _type;
		Animal();

	public:
		
		Animal(const Animal &copy);

		virtual ~Animal();

		Animal &operator=(const Animal &src);

		virtual void makeSound(void)const = 0;

		std::string getType(void)const;
};

#endif

