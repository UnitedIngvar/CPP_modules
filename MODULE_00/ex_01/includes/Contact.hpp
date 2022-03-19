#ifndef CONTACT_H
#define CONTACT_H
#include <string>

using namespace std;

class Contact
{
private:
	int			_id;
	string	_first_name;
	string	_last_name;
	string	_nickname;
	string	_phone_number;
	string	_darkest_secret;

public:
	Contact(int id,
			string first_name,
			string last_name,
			string nickname,
			string phone_number,
			string darkest_secret);

	string	GetFirstName();
	string	GetLastName();
	string	GetNickname();
	string	GetPhoneNumber();
	string	GetDarkestSecret();
};

#endif
