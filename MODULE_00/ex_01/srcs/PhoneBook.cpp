#include "includes/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	_contacts_count = 0;
}

void	PhoneBook::ReplaceOldestContact(Contact *contact)
{
	_contacts
}

void	PhoneBook::AddContact(Contact* contact)
{
	if (_contacts_count < 8)
	{
		_contacts[_contacts_count - 1] = contact;
		_contacts_count++;
	}
	else
	{

	}
}

void	PhoneBook::DisplayContactList()
{

}

void	PhoneBook::GetContactAtIndex(int idex)
{

}
