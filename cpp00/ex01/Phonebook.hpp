#ifndef PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact _contacts[8];
		int		_index;
		int	_delete;
		bool	_full;

	public:
		Phonebook(void);
		~Phonebook(void);

		void	set_information(void);
		void	get_information(void)const;
		void	show_instruction(void);
};

#endif
