#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);

		~FragTrap();

		FragTrap &operator=(const FragTrap &src);

		void highFiveGuys(void);
};

#endif