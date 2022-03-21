#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook
{
private:
	int		_contacts_count;
	int		_oldest_contact_index;
	Contact	*_contacts[8];

	void	ReplaceOldestContact(Contact *contact);

public:
	PhoneBook();

	void	AddContact(Contact *contact);
	void	DisplayContactList();
	bool	PrintContactAtIndex(int idex);
};

#endif
