/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:59:45 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/14 11:40:08 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <string>

template < typename T >
void	iter( T *array, size_t len, void(*f)(T &))
{
	if(array == NULL || f == NULL)
		return;
	for(size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif

