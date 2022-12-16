/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:11:15 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/16 14:23:31 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int> _vault;
		unsigned int _size;
		unsigned int _pos;

		Span();

	public:
		Span(unsigned int N);
		Span(const Span &src);

		~Span();

		Span &operator=(const Span &src);

		void addNumber(int number);
		void addNumber(unsigned int limit, time_t chronos);
		unsigned int shortestSpan()const;
		unsigned int longestSpan()const;

		unsigned int getSize()const;
		unsigned int getPos()const;


	class	VectorInvalidException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	ArrayFullException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	ArrayEmptyException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class	ComparisonInvalidException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
};

#endif
