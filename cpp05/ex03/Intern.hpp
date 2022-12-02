/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:26:30 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/02 09:55:41 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &src);

		~Intern();

		Intern &operator=(const Intern &src);

		Form *makeForm(const std::string form, const std::string target);

};
