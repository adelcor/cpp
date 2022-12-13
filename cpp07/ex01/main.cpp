/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:48:57 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/13 14:52:20 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

void ft_print(char &arr)
{
	std::cout << arr << std::endl;
}

void ft_to_lower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_to_upper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main(void)
{
	char a[] = {'A', 'B', 'C'};

	iter(a, 3, ft_print);
	iter(a, 3, ft_to_lower);
	iter(a, 3, ft_print);
	iter(a, 3, ft_to_upper);
	iter(a, 3, ft_print);
	return(0);
}

