#include <iostream>
#include <string>

#ifndef ZOMBIE_H
# define ZOMBIE_H
class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void set_name(std::string name);
};

#endif
