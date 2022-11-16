/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:59:47 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/16 13:33:34 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << "\t\tis a at start\n" << std::endl;
	std::cout << ++a << "\t\tis a at ++a\n" << std::endl;
	std::cout << a << "\t\tis a after ++a\n" << std::endl;
	std::cout << a++ << "\t\tis a at a++\n" << std::endl;
	std::cout << a << "\t\tis a after a++\n" << std::endl;

	std::cout << b << "\t\tvalue of b\n" << std::endl;
	std::cout << Fixed::max(a, b) << "\t\tthe max of a and b\n" << std::endl;
	std::cout << Fixed::min(a, b) << "\t\tthe min of a and b\n" << std::endl;
	std::cout << (a > b) << std::endl;
	return(0);
}

