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

		void Contact::set_name(std::string name);
		void Contact::set_last_name(std::string lname);
		void Contact::set_nickname(std::string nname);
		void Contact::set_phone_number(std::string phnumber);
		void Contact::set_secret(std::string dsecret);
		std::string Contact::get_name(void);
		std::string Contact::get_last_name(void);
		std::string Contact::get_nickname(void);
		std::string Contact::get_phone_number(void);
		std::string Contact::get_darkest_secret(void);

};

#endif
