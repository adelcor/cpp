/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:36:28 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/05 18:33:26 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H

#define FORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		const std::string _name;
		bool _is_signed;
		const int _sign_grade;
		const int _exec_grade;

	
	
		Form(void);
		Form(int sign_grade, int exec_grade);
		Form(const std::string name);
		Form(const std::string name, int sign_grade, int exec_grade);

	public:
		Form(const Form &src);
		
		virtual	~Form();

	
		Form &operator=(const Form &src);

	
		void beSigned(Bureaucrat &signer);
		virtual void execute(Bureaucrat const &executor)const = 0;
	
		const std::string getName(void)const;
		const std::string getIsSigned(void)const;
		bool getIsSignedBool(void)const;
		int getSignGrade(void)const;
		int getExecGrade(void)const;

	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
			
};


std::ostream	&operator<<(std::ostream &o, Form *a);

#endif
