/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:18:32 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/26 17:18:34 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	if (argc == 2)
		karen.complain(argv[1]);
	else
		karen.complain("irrelevant string");
	return(EXIT_SUCCESS);
}

