#include "includes/ContactTableBuilder.hpp"
#include <string>

ContactTableBuilder::ContactTableBuilder()
{
	_rows_count = 0;
}

std::string		ContactTableBuilder::CreateCell(std::string cell_text)
{
	std::string	cell;
	const int	CELL_LEN = 10;

	int text_len = cell_text.length();
	if (text_len > CELL_LEN)
	{
		cell = cell_text.substr(0, CELL_LEN);
		cell.replace(9, 1, ".");
	}
	else
	{
		cell = std::string(CELL_LEN, ' ');
		cell.replace(CELL_LEN - text_len, text_len, cell_text);
	}

	return cell;
}

std::string	ContactTableBuilder::AddContactToTable(Contact *contact)
{
	_table[_rows_count] =
	CreateCell(std::to_string(_rows_count)) + " | " +
	CreateCell(contact->GetFirstName()) + " | " +
	CreateCell(contact->GetLastName()) + " | " +
	CreateCell(contact->GetNickname()) + std::endl;

	_rows_count++;
}

void	ContactTableBuilder::DisplayContactTable()
{
	for (int i = 0; i < _rows_count; i++;)
	{
		std::cout << _table[i];
	}
}
