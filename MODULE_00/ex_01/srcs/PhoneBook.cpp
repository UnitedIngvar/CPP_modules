#include "PhoneBook.hpp"
#include "ContactTableBuilder.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	_contacts_count = 0;
	_oldest_contact_index = 0;
}

void	PhoneBook::ReplaceOldestContact(Contact *contact)
{
	delete _contacts[_oldest_contact_index];

	_contacts[_oldest_contact_index] = contact;
	if (_oldest_contact_index == 7)
	{
		_oldest_contact_index = 0;
		return;
	}
	_oldest_contact_index++;
}

void	PhoneBook::AddContact(Contact *contact)
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
	ContactTableBuilder	*contactTableBuilder =
		new ContactTableBuilder();

	for (int i = 0; i < _contacts_count; i++)
	{
		contactTableBuilder->AddContactToTable(_contacts[i]);
	}
	contactTableBuilder->DisplayContactTable();

	delete contactTableBuilder;
}

bool	PhoneBook::IsEmpty()
{
	return _contacts_count == 0;
}

bool	PhoneBook::PrintContactAtIndex(int index)
{
	if (index > _contacts_count - 1)
	{
		return false;
	}

	_contacts[index]->Print();
	return true;
}

PhoneBook::~PhoneBook()
{
	for (int i = 0; i < _contacts_count; i++)
	{
		delete _contacts[i];
	}
}
