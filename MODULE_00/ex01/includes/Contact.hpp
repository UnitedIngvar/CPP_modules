#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	Contact(std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string darkest_secret);

	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickname();
	std::string	GetPhoneNumber();
	std::string	GetDarkestSecret();
	void		Print();

	~Contact();
};

#endif