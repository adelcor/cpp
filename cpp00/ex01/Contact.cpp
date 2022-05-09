

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}
void Contact::set_name(std::string name) : firstname(name)
{		
}
void Contact::set_last_name(std::string lname) : lastname(lname)
{
}
void Contact::set_nickname(std::string nname) : nickname(nname)
{
}
void Contact::set_phone_number(std::string phnumber) : phonenumber(phnumber)
{
}
void Contact::set_secret(std::string dsecret) : darkestsecret(dsecret)
{
}
std::string Contact::get_name(void)
{
	std::cout << this->firstname;
}
std::string Contact::get_last_name(void)
{
	std::cout << this->lastname;
}
std::string Contact::get_nickname(void)
{
	std::cout << this->nickname;
}
std::string Contact::get_phone_number(void)
{
	std::cout << this->phonenumber;
}
std::string Contact::get_darkest_secret(void)
{
	std::cout << this->darkestsecret;
}





