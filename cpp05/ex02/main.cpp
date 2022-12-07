#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat();
		Form *b = new PresidentialPardonForm("default");
		// Form *c = new RobotomyRequestForm();
		// Form *d = new ShrubberyCreationForm();
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;

		
		
			b->beSigned(*a);
			// b->execute(*a);

		std::cout << b;
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		std::cout << std::endl;
	}
	std::cout << "**42TEST42***" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Junior Engineer", 145);
		Bureaucrat *b = new Bureaucrat("Linus Torvalds", 1);
		Form *c = new PresidentialPardonForm("Piscinero");
		// Form *d = new Form(*c);
		// Form *d = new Form("Rent Contract", 140, 100); // you are not able to construct an abstract class here
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << std::endl;


		c->execute(*b);
		c->beSigned(*a);
		// a->signForm(*c);

		std::cout << std::endl;
		std::cout << c;
		std::cout << std::endl;
		c->beSigned(*b);
		// b->signForm(*c);
		//
		std::cout << std::endl;
		std::cout << c;
		std::cout << std::endl;

		std::cout << std::endl;
		b->signForm(*c);
		std::cout << std::endl;
		c->execute(*a);
		// a.executeForm(*c);

		std::cout << std::endl;
		c->execute(*b);
		// b.executeForm(*c);

		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	std::cout << "**42TEST42***" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Putin", 1);
		PresidentialPardonForm *b = new PresidentialPardonForm("dude");
		PresidentialPardonForm *c = new PresidentialPardonForm(*b);
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		b->beSigned(*a);
		a->signForm(*c);
		b->execute(*a);
		a->executeForm(*c);
		// c->execute(*a);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	std::cout << "****TEST****" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Pallete", 1);
		RobotomyRequestForm *b = new RobotomyRequestForm("Bender");
		ShrubberyCreationForm *c = new ShrubberyCreationForm("coolforest");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		b->beSigned(*a);
		a->signForm(*c);
		std::cout << b;
		std::cout << c;
		for (int i= 0; i < 10; i++)
		{	
			b->execute(*a);
		}
		// a->executeForm(*c);
		c->execute(*a);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	return (0);
}
