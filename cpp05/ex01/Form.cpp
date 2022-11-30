/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:27:54 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/30 13:42:22 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("default"), _is_signed(false), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const Form &src): _name(src.getName() + "_copy"), _is_signed(src.getIsSignedBool()), _sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade())
{
	std::cout << "Form Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	*this = src;
}

Form::Form(int sign_grade, int exec_grade): _name("default"), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << sign_grade << " and execution-grade of " << exec_grade <<
	std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(Form::GradeTooLowException());
	else if( i < 1 || j < 1)
		throw(Form::GradeTooHighException());
}

Form::Form(const std::string name): _name(name), _is_signed(false), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << this->getSignGrade() <<
	" and execution-grade of " << this->getExecGrade() << std::endl;
}

Form::Form(const std::string name, int sign_grade, int exec_grade): _name(name), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << sign_grade << " and execution-grade of " << exec_grade <<
	std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(Form::GradeTooLowException());
	else if( i < 1 || j < 1)
		throw(Form::GradeTooHighException());
}

Form::~Form()
{
	std::cout << "Form Deconstructor for " << this->getName() << " called" << std::endl;
}

Form &Form::operator=(const Form &src)
{
	std::cout << "Form Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	//nothing to assign in this class
	return *this;
}

void Form::beSigned(Bureaucrat &signer)
{
	try
	{
		if ((int)signer.getGrade() > this->getSignGrade())
			throw(Bureaucrat::GradeTooLowException());
		else if (this->getIsSigned() == "✗ false")
		{
			this->_is_signed = true;
			std::cout << this->getName() << " Form was signed by " << signer.getName() << std::endl;
		}
		else
			std::cout << this->getName() << " Form is already signed" << std::endl;
	}
	catch(const	std::exception &e)
	{
		std::cerr << this->getName() << " Form cannot  *TEST* be signed by " << signer.getName() << " because " << e.what() << std::endl;
	}
}

const std::string	Form::getName(void)const
{
	return (this->_name);
}

const std::string	Form::getIsSigned(void)const
{
	if (this->_is_signed)
		return ("✓ true");
	else
		return ("✗ false");
}

bool	Form::getIsSignedBool(void)const
{
	return (this->_is_signed);
}

int	Form::getSignGrade(void)const
{
	return (this->_sign_grade);
}
int	Form::getExecGrade(void)const
{
	return (this->_exec_grade);
}


const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Form exception: Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form exception: Grade too high");
};

std::ostream	&operator<<(std::ostream &o, Form *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getSignGrade() <<
	"\n\texec-grade:\t" << a->getExecGrade() <<
	"\n\tis signed:\t" << a->getIsSigned() <<
	std::endl;
	return (o);
}
