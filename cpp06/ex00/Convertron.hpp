/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertron.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:20:42 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/07 18:20:48 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTRON_H
#define CONVERTRON_H

#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cctype>

#define NAN_INF 1
#define ERROR 2
#define CHAR 3
#define INT 4
#define FLOAT 5
#define DOUBLE 6

class Convertron
{
	private:
		const std::string _input;
		int _type;
		char _char;
		int _int;
		float _float;
		double _double;


		Convertron();

		int checkInput(void);
		void convertInput(void);

		void fromChar(void);
		void fromInt(void);
		void fromFloat(void);
		void fromDouble(void);

		void printOutput(void)const;

		
		std::string getInput(void)const;
		int getType(void)const;
		char getChar(void)const;
		int getInt(void)const;
		float getFloat(void)const;
		double getDouble(void)const;
		
	public:
	
		Convertron(const std::string input);
		Convertron(const Convertron &src);

	
		~Convertron();

	
		Convertron &operator=(const Convertron &src);

	
	class ErrorException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
};

#endif

