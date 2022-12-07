/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:20:58 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/07 18:21:00 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertron.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "One Argument required." << std::endl;
		return (1);
	}
	try
	{
		Convertron conversion(argv[1]);
		// try
		// {
		// 	Convertron copy(conversion);
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << std::endl;
		// }
	}
	catch(const Convertron::ErrorException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
