#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "### TEST ###\n" << std::endl;

	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	ClapTrap a;
	ClapTrap b("Buffalo");

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.attack("other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Buffalo-clone");
	b.beRepaired(3);
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	return(0);
}
