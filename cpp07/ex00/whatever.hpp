/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:13:41 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/14 09:39:34 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T>

const T &max(const T &x, const T &y)
{
	return(x >= y ? x : y);
}

template <typename C>

const C &min(const C &x, const C &y)
{
		return(x <= y ? x : y);
}

template <typename M>

void swap(M &x, M &y)
{
	M temp = x;
	x = y;
	y = temp;
}
#endif

