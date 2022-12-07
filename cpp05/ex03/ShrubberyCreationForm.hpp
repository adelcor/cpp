/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:40:35 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/05 18:41:34 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class Bureaucrat;

class Form;

class ShrubberyCreationForm: public Form
{
	private:
		const std::string _target;

		ShrubberyCreationForm(void);
	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &src);

		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

		void execute(Bureaucrat const &executor)const;

		std::string getTarget(void)const;

};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm *a);

#endif
