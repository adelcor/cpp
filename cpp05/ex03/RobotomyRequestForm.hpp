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
