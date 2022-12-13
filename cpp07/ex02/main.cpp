/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:28:18 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/13 18:29:19 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

int main(void)
{
    try
    {
        Array<int> empty = Array<int>();
        Array<int> full = Array<int>(42);
        empty.size();
        full.size();

        full[0] = 24;
        full[1] = 12;
        full[2] = 6;
		full[3] = 3;
       
        std::cout << full[2] << std::endl;
        std::cout << full[12] << std::endl;
		std::cout << full[43] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
