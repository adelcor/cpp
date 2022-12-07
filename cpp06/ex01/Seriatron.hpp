/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seriatron.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:21:58 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/07 18:22:00 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIATRON_H

#define SERIATRON_H

#include <string>
#include <iostream>


typedef struct Data
{
	std::string	name;
	size_t		age;
	Data		*next;
}				Data;

class Seriatron
{
	private:
		
	public:
	
		Seriatron();
		Seriatron(const Seriatron &src);
		
		~Seriatron();
		
		Seriatron &operator=(const Seriatron &src);
		
		uintptr_t serialize(Data *ptr);
		Data *unserialize(uintptr_t raw);

	class NoPointerException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif
