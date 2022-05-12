

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
void	Contact::tostring(void)
{
	if (this->firstname.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) << this->firstname.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << this->firstname << '|';
	if (this->lastname.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) << this->lastname.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << this->lastname << '|';
	if (this->nickname.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) << this->nickname.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << this->nickname << '|';
}

void	Contact::show_contact(void)
{
	std::cout << "First Name: " << this->firstname << std::endl;
	std::cout << "Last Name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phonenumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestsecret << std::endl;

	std::cout << "Enter any key to continue..." << std::endl;
	return;
}








