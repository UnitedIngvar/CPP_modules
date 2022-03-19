#include "includes/PhoneBook.hpp"
#include "includes/ContactTableBuilder.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	_contacts_count = 0;
	_oldest_contact_index = 0;
}

void	PhoneBook::ReplaceOldestContact(Contact *contact)
{
	_contacts[_oldest_contact_index] = contact;

	if (_oldest_contact_index == 7)
	{
		_oldest_contact_index = 0;
		return;
	}
	oldest_contact_index++;
}

void	PhoneBook::AddContact(Contact* contact)
{
	if (_contacts_count < 8)
	{
		_contacts[_contacts_count] = contact;
		_contacts_count++;
	}
	else
	{
		ReplaceOldestContact(contact);
	}
}

void	PhoneBook::DisplayContactList()
{
	ContactTableBuilder	*contactTableBuilder = new ContactTableBuilder();

	for (int i = 0; i < _contacts_count; i++)
	{
		contactTableBuilder->AddContactToTable(_contacts[i]);
	}
	contactTableBuilder->DisplayContactTable();
	delete contactTableBuilder;
}

void	PhoneBook::GetContactAtIndex(int index)
{
	Contact *contact = _contacts[index - 1];
}
