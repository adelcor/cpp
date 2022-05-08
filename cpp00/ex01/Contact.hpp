#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
	public:
		Contact(void);
		~Contact(void);
		void set_name(void);
		void set_last_name(void);
		void set_nickname(void);
		void set_phone_number(void);
		void set_secret(void);
		void get_name(void);
		void get_last_name(void);
		void get_nickname(void);
		void get_phone_number(void);
		void get_darkest_secret(void);
};

#endif
