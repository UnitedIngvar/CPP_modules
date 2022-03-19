#ifndef CONTACT_H
#define CONTACT_H
#include <string>

class Contact
{
private:
	int			id;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact(int id,
			std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string darkest_secret);

	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickname();
	std::string	GetPhoneNumber();
	std::string	GetDarkestSecret();
};

#endif
