#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Phonebook
{
	private:
		Contact contact[8];
		int 	index;
		bool	full;
	public:
		Phonebook();
		~Phonebook();

		void	set_information(void);
		void	get_information(void);
};

