#include "Contact.hpp"

Contact::Contact(int id,
			string first_name,
			string last_name,
			string nickname,
			string phone_number,
			string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

string	Contact::GetFirstName(){ return _first_name; }

string	Contact::GetLastName(){ return _last_name; }

string	Contact::GetNickname(){ return _nickname; }

string	Contact::GetPhoneNumber(){ return _phone_number; }

string	Contact::GetDarkestSecret(){ return _darkest_secret; }
