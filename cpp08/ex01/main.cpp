/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:15:48 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/19 18:09:53 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

int main()
{
	{
		Span a = Span(19);
		for (size_t i = 1; i < 18; i++)
		{
			try
			{
				a.addNumber(i);
			}
			catch (std::exception &e)
			{
				std::cerr << std::endl << e.what() << std::endl;
			}
		}
		try
		{
			std::cout << "shortest span is " << a.shortestSpan() << std::endl;
			std::cout << "longest span is " << a.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}

	Span b = NULL;

	try
	{
		b.shortestSpan();
	}

	catch(std::exception &e)
	{
		std::cerr << std::endl << e.what() << std::endl;
	}



	std::cout << std::endl << "---------------------------------------------------------------" << std::endl << std::endl;
	{
		Span a = Span(10000);
		a.addNumber(10000, time(NULL));
		std::cout << "shortest span is " << a.shortestSpan() << std::endl;
		std::cout << "longest span is " << a.longestSpan() << std::endl << std::endl;
	}

	std::cout << "**TEST**TEST**TEST**TEST**TEST***TEST" << std::endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}
