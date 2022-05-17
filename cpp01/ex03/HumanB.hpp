#ifndef HUMANB_H
# define HUMANB_H
#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
		bool _is_armed;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void);
};
#endif
