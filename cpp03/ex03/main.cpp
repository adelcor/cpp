
#include "DiamondTrap.hpp"

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

	
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ScavTrap c;
		ScavTrap d("Savage");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
		
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		
		FragTrap e;
		FragTrap f("Chadd");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		e.highFiveGuys();
		e.attack("some random dude");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("some random dude");
		f.highFiveGuys();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);
		a.get_hit_points();
		a.get_energy_points();
		a.get_attack_dmg();
		b.get_hit_points();
		b.get_energy_points();
		b.get_attack_dmg();
		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		a.guardGate();
		a.highFiveGuys();
		b.guardGate();
		b.highFiveGuys();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}

		return(0);
}

