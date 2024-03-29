/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:01:33 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/05 18:39:45 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class Bureaucrat;

class Form;

class PresidentialPardonForm: public Form
{
	private:
		const std::string _target;

		PresidentialPardonForm(void);
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &src);

		~PresidentialPardonForm();

	
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		void execute(Bureaucrat const &executor)const;
	
		std::string getTarget(void)const;

};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a);

#endif
