#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

std::string	Contact::GetFirstName(){ return _first_name; }

std::string	Contact::GetLastName(){ return _last_name; }

std::string	Contact::GetNickname(){ return _nickname; }

std::string	Contact::GetPhoneNumber(){ return _phone_number; }

std::string	Contact::GetDarkestSecret(){ return _darkest_secret; }

void		Contact::Print()
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Second Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}
