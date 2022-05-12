#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string s);
		~Zombie();
		void announce(void);
};

