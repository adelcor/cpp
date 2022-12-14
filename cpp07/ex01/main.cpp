/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:48:57 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/14 11:49:53 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

template<typename T>

void print( T &a )
{
	std::cout << "Variable's value is: " << a << std::endl;
}

void	Random( int &number )
{
	number = std::rand() % 100;
}

 class Awsome
 {

 public:
     Awsome(void): _n(42) {return;}
     int get(void)const {return this->_n;}
 private:
     int _n;
 };

std::ostream &operator<<(std::ostream &o, Awsome const &rhs) {o<<rhs.get(); return o;}

int main(void)
{
	int tab[] = {0,1,2,3,4};
    Awsome tab2[5];
	
	iter(tab, 5, print);
	iter(tab2, 5, print);

	std::cout << "TEST----------------------------------TEST" << std::endl;
	
	std::string strTable[3];
    int         *intTable = new int[5];

    strTable[0] = "Data";
    strTable[1] = "Hey";
    strTable[2] = "Hou";
    ::iter(strTable, 3, &print);
    for (int i = 0; i < 5; i ++)
        Random(intTable[i]);
    ::iter(intTable, 5, &print);
	
	return(0);
 }
