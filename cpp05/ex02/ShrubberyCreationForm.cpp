/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:03:13 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/05 18:33:00 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Constructor for target " << this->getTarget() << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src): Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{
	std::cout << "ShrubberyCreationForm Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;

	*this = src;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Deconstructor " << this->getName() << " called" << std::endl;
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	
	return *this;
}


void	ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
	try
	{
		if ((int)executor.getGrade() > this->getExecGrade())
			throw (Bureaucrat::GradeTooLowException());
		else if (this->getIsSignedBool() == false)
			throw (Form::FormNotSignedException());
		else
		{
			std::ofstream outfile (this->getTarget().append("_shrubbery").c_str());

			for (int i = 0; i < 2; i++)
			{
				outfile <<
				"         v" << std::endl <<
				"        >X<" << std::endl <<
				"         A" << std::endl <<
				"        d$b" << std::endl <<
				"      .d\\$$b." << std::endl <<
				"    .d$i$$\\$$b." << std::endl <<
				"       d$$@b" << std::endl <<
				"      d\\$$$ib" << std::endl <<
				"    .d$$$\\$$$b" << std::endl <<
				"  .d$$@$$$$\\$$ib." << std::endl <<
				"      d$$i$$b" << std::endl <<
				"     d\\$$$$@$b" << std::endl <<
				"  .d$@$$\\$$$$$@b." << std::endl <<
				".d$$$$i$$$\\$$$$$$b." << std::endl <<
				"        ###" << std::endl <<
				"        ###" << std::endl <<
				"        ###" << std::endl <<
			std::endl;
			}
			outfile.close();
		}
	}
	    catch(const std::exception &e)
		{
			std::cerr << this->getName() << " Form cannot be executed by " << executor.getName() << " because " << e.what() << std::endl;
		}

}


std::string	ShrubberyCreationForm::getTarget(void)const
{
	return (this->_target);
}


std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getSignGrade() <<
	"\n\texec-grade:\t" << a->getExecGrade() <<
	"\n\tis signed:\t" << a->getIsSigned() <<
	std::endl;
	return (o);
}
