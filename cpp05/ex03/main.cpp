#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat();
		Intern *z = new Intern();
		Form *b = z->makeForm("RandomForm", "Clown");
		b = z->makeForm("PresidentialPardonForm", "Clown");
		// Form *b = new PresidentialPardonForm("Clown");
		// Form *c = new RobotomyRequestForm("Bender");
		// Form *d = new ShrubberyCreationForm("coolforest");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << std::endl;

		
			b->beSigned(*a);
			// b->execute(*a);

		std::cout << std::endl;
		std::cout << b;
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete z;
		std::cout << std::endl;
	}
	std::cout << "***TEST***" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Pringado", 145);
		Bureaucrat *b = new Bureaucrat("Capo", 1);
		Form *c = new PresidentialPardonForm("Maleante");
		// Form *d = new Form(*c);
		// Form *d = new Form("Rent Contract", 140, 100); // you are not able to construct an abstract class here
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << std::endl;

	
		c->execute(*b);
		std::cout << std::endl;
		c->beSigned(*a);
		// a->signForm(*c);
		

		
		std::cout << std::endl;
		std::cout << c;
		std::cout << std::endl;
		c->beSigned(*b);
		// b->signForm(*c);
		
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
	std::cout << "***TEST***" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Megatron", 1);
		Intern *z = new Intern();
		Form *b = z->makeForm("RobotomyRequestForm", "Bender");
		Form *c = z->makeForm("ShrubberyCreationForm", "Coolforest");
		// Form *c = new ShrubberyCreationForm("Coolforest");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << std::endl;

		b->beSigned(*a);
		a->signForm(*c);
		std::cout << std::endl;
		std::cout << b;
		std::cout << c;
		std::cout << std::endl;

		for (int i= 0; i < 10; i++)
			b->execute(*a);
		a->executeForm(*c);
		// c->execute(*a);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		delete z;
		std::cout << std::endl;
	}
	return (0);
}
