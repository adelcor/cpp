/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:48:51 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/20 14:46:46 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <list>
#include <vector>

int main()
{
	std::vector<int> test;
	test.push_back(155);
	test.push_back(156);
	test.push_back(157);

	std::vector<int>::const_iterator	it = test.end();

	try
	{
		it = ::easyfind(test, 156);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != test.end())
	{
		int index = it - test.begin();
		std::cout << *it << " found" << " at position " << index << std::endl;
	}

	it = test.end();

	try
	{
		it = ::easyfind(test, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != test.end())
		std::cout << *it << " found" << std::endl;

	return (0);
}
