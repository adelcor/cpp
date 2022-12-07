/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:16:09 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/05 18:17:26 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class Form;

class RobotomyRequestForm: public Form
{
	private:
		const std::string _target;
		

		RobotomyRequestForm(void);

	public:
	
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &src);

	
		~RobotomyRequestForm();

	
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

	
		void execute(Bureaucrat const &executor)const;
	
		std::string getTarget(void)const;
	

};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm *a);
#endif
