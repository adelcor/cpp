/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:21:18 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/14 17:21:25 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void replace(char **argv)
{
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream inputfs(filename);
	if (inputfs.good())
	{
		if (inputfs.peek() == std::ifstream::traits_type::eof())
			std::cout << "Error: File is empty" << std::endl;
		else
		{
			std::ofstream outputfs(filename.append(".replace").data());
			while (inputfs.good() && outputfs.good())
			{
				std::string line;
				std::size_t found;
				std::getline(inputfs, line);
				found = line.find(s1, 0);
				while (found != std::string::npos)
				{
					line.erase(found, s1.length());
					line.insert(found, s2);
					found = line.find(s1, found);
				}
				outputfs << line;
				if (inputfs.eof())
					break;
				outputfs << std::endl;
			}
			inputfs.close();
			outputfs.close();
		}
	}
	else
		std::cout << "Error: " << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 4)
		replace(argv);
	else
		std::cout << "Error: Usage: ./replace <filename> <string 1> <string 2>" << std::endl;
}
