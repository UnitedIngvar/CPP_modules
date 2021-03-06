#ifndef CONTACTTABLE_H
# define CONTACTTABLE_H
# include <string>
# include "Contact.hpp"

class ContactTableBuilder
{
private:
	int			_rows_count;
	std::string	_table[8];

	std::string	CreateCell(std::string cell_text);

public:
	ContactTableBuilder();

	void		AddContactToTable(Contact *contact);
	void		DisplayContactTable();
	~ContactTableBuilder();
};

#endif
