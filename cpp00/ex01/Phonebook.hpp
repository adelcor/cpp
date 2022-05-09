#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contact[8];
		int 	index;
		bool	full;
	public:
		Phonebook();
		~Phonebook();

		void	set_information(Contact c);
		void	get_information(void);
		void	search_contact(void);
};

#endif

