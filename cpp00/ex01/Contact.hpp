#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact
{
	private:

		static std::string		_fields_name[5];
		std::string				_informations[11];
		
		enum	Field 
		{
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};

	public:

		Contact(void);
		~Contact(void);

		bool	set_contact();
		void	get_contact(int index)const;
		void	print_contact(void)const;
};

#endif
