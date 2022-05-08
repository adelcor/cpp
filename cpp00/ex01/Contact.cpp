

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}
void Contact::set_name(void)
{
	std::cout << "PLEASE INSERT NAME" << std::endl;
	std::cin >> this->firstname;
}
void Contact::set_last_name(void)
{
	std::getline(std::cin, this->lastname);
}
void Contact::set_nickname(void)
{
	std::getline(std::cin, this->nickname);
}
void Contact::set_phone_number(void)
{
	std::getline(std::cin, this->phonenumber);
}
void Contact::set_secret(void)
{
	std::getline(std::cin, this->darkestsecret);
}
void Contact::get_name(void)
{
	std::cout << this->firstname << std::endl;
}
void Contact::get_last_name(void)
{
	std::cout << this->lastname << std::endl;
}
void Contact::get_nickname(void)
{
	std::cout << this->nickname << std::endl;
}
void Contact::get_phone_number(void)
{
	std::cout << this->phonenumber << std::endl;
}
void Contact::get_darkest_secret(void)
{
	std::cout << this->darkestsecret;
}





