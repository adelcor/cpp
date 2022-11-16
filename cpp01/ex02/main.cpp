/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:23:30 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/03 12:48:46 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "ADRESS OF string: " << &string << std::endl;
	std::cout << "ADRESS OF stringPTR: " << stringPTR << std::endl;
	std::cout << "ADRESS OF stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;

	return(0);
}

