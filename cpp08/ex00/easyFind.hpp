/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:44:55 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/20 14:50:42 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>


class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("Thank You Mario!\nBut Our Princess Is In Another Castle!");
			}
};

template< typename T>
typename T::iterator easyfind(T &in, int i)
{
	typename T::iterator	it;
	it = find(in.begin(), in.end(), i);
	if (it == in.end())
	{
		throw (NotFoundException());
	}
	return (it);
}

#endif
