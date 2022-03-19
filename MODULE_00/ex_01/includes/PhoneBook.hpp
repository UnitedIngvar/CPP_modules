#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact[]	contacts;
public:
	PhoneBook();

	void	AddContact(Contact* contact);
	void	DisplayContactList();
	void	GetContactAtIndex(int idex);
};

#endif
