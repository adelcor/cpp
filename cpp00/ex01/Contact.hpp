#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

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

		void set_name(std::string name);
		void set_last_name(std::string lname);
		void set_nickname(std::string nname);
		void set_phone_number(std::string phnumber);
		void set_secret(std::string dsecret);
		std::string get_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		std::string get_phone_number(void);
		std::string get_darkest_secret(void);
		void tostring(void);
		void show_contact(void);

};

#endif
