

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}
void Contact::set_name(std::string name)
{
	this->firstname = name;	
}
void Contact::set_last_name(std::string lname)
{
	this->lastname = lname;
}
void Contact::set_nickname(std::string nname)
{
	this->nickname = nname;
}
void Contact::set_phone_number(std::string phnumber)
{
	this->phonenumber = phnumber;
}
void Contact::set_secret(std::string dsecret)
{
	this->darkestsecret = dsecret;
}
std::string Contact::get_name(void)
{
	return(this->firstname);
}
std::string Contact::get_last_name(void)
{
	return(this->lastname);
}
std::string Contact::get_nickname(void)
{
	return(this->nickname);
}
std::string Contact::get_phone_number(void)
{
	return(this->phonenumber);
}
std::string Contact::get_darkest_secret(void)
{
	return(this->darkestsecret);
}







