#include <iostream>
#include <string>
#include <cstdlib>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Karen();
		~Karen();
		void	complain(std::string level);
};


