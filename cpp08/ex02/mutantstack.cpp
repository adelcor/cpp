/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:38:52 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/19 19:26:54 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>

MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	std::cout << "Default MutantStack constructor called" << std::endl;
}

template <typename T>

MutantStack<T>::MutantStack(const MutantStack &copy)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	*this = copy;
}

template <typename T>

MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
	if(this != &copy)
	{
		this->c = copy.c;
	}
	return (*this);
}

template <typename T>

MutantStack<T>::~MutantStack(void)
{
    std::cout << "MutantStack destructor called." << std::endl;
}

template <typename T>

typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return this->c.begin();
}

template <typename T>

typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return this->c.end();
}

template <typename T>

typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void)
{
    return this->c.cbegin();
}

template <typename T>

typename MutantStack<T>::const_iterator MutantStack<T>::cend(void)
{
    return this->c.cend();
}

template <typename T>

typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
    return this->c.rbegin();
}

template <typename T>

typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
    return this->c.rend();
}

template <typename T>

typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(void)
{
    return this->c.crbegin();
}

template <typename T>

typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(void)
{
    return this->c.crend();
}
