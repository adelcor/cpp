/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:21:48 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/19 19:05:58 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <algorithm>
#include <iostream>

template < typename T >
class MutantStack : public std::stack<T>
{
	public:
		
		MutantStack(void);
		MutantStack(const MutantStack &copy);
		MutantStack<T> &operator=(const MutantStack &copy);
		~MutantStack(void);

		typedef typename MutantStack<T>::container_type::iterator iterator;
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		iterator begin(void);
		iterator end(void);
		const_iterator cbegin(void);
		const_iterator cend(void);
		reverse_iterator rbegin(void);
		reverse_iterator rend(void);
		const_reverse_iterator crbegin(void);
		const_reverse_iterator crend(void);
};

#endif

