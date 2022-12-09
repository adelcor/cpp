/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:55:15 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/09 12:27:34 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <cstdio>
#include <iostream>

static Base *generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		case 2:
			return (new C());
			break;
		default:
			perror("Random generator failure");
			return(NULL);
	}
}

static void identify (Base *Test)
{
	std::cout << "Identify by pointer: ";

	if (dynamic_cast<A *>(Test))
		std::cout << "A type" << std::endl;
	else if (dynamic_cast<B *>(Test))
		std::cout << "B type" << std::endl;
	else if (dynamic_cast<C *>(Test))
		std::cout << "C type" << std::endl;
	else
		std::cout << "I have no idea what type it is" << std::endl;
}

static void identify (Base &Test)
{
	uintptr_t Bastion;
	Bastion = reinterpret_cast<uintptr_t>(&Test);

	if(Bastion == 0)
	{
		std::cout << "Reference is NULL" << std::endl;
		exit(0);
	}

	std::cout << "Trying Type A" << std::endl;

	try
	{
		if(&dynamic_cast<A &>(Test))
			std::cout << "A type" << std::endl;
	}
	
	catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

	std::cout << "Trying Type B" << std::endl;

	try
	{
		if(&dynamic_cast<B &>(Test))
			std::cout << "B type" << std::endl;
	}

	catch (const std::exception &e)
	{	
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Trying Type C" << std::endl;

	try
	{
		if(&dynamic_cast<C &>(Test))
			std::cout << "C type" << std::endl;
	}
	
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	srand(time(NULL));
	Base *basePtr =  generate();
	Base & baseRef = *basePtr;
	identify(basePtr);
	identify(baseRef);
	delete basePtr;
	return(0);
}




