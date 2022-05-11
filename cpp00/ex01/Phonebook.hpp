#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contact[8];
		int 	index;
		bool full;
	public:

		Phonebook();
		~Phonebook();

		void	set_information(Contact c);
		void	get_information(void);
		void	display_search(void);
		void	set_index(int i);
		int		get_index(void);
		Contact	get_contact(int i);
};

#endif

