/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:18:00 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/14 17:29:41 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}
void Karen::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since the last month" << std::endl;
}
void Karen::error(void)
{
	std::cout << "[ERROR]\nThis is unaceptable! I want to speak to the manager now." << std::endl;
}
void Karen::complain(std::string level)
{
	void	(Karen::*functionPTRS[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for(; i < 4; i++)
	{
		if (complains[i] == level)
			break;
	}
	switch(i)
	{
		case(0):
			(this->*functionPTRS[0])();
		case(1):
			(this->*functionPTRS[1])();
		case(2):
			(this->*functionPTRS[2])();
		case(3):
			(this->*functionPTRS[3])();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}















