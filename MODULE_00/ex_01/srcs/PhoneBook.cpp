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
	if (_contacts_count == 0)
	{
		std::cout << "Nothing to show yet! Add a contact" << std::endl;
	}

	// Можно было бы табличку сохранить до следующего обновления
	ContactTableBuilder	*contactTableBuilder = new ContactTableBuilder();

	for (int i = 0; i < _contacts_count; i++)
	{
		contactTableBuilder->AddContactToTable(_contacts[i]);
	}
	contactTableBuilder->DisplayContactTable();

	delete contactTableBuilder;
}

void	PhoneBook::PrintContactAtIndex(int index)
{
	if (index > _contacts_count)
	{
		std::cout << "Wrong index! Try again!" << std::endl;
	}

	Contact *contact = _contacts[index];
}
