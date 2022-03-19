#ifndef CONTACTTABLE_H
#define CONTACTTABLE_H
#include <string>
#include "includes/Contact.hpp"


class ContactTable
{
private:
	int		_rows_count;
	string	_table[8][40];

public:
	ContactTable();

	std::string	AddContactToTable(Contact *contact);
	std::string	DisplayContactTable();
};

#endif
