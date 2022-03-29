#include <fstream>
#include <iostream>
#include <unistd.h>

std::string	ReplceEntries(
	std::string line,
	std::string entry,
	std::string replacement)
{
	for (size_t i = 0; i < line.length(); i++)
	{
		if (line.compare(i, entry.length(), entry) == 0)
		{
			line.replace(i, entry.length(), replacement);
			i += replacement.length() - 1;
		}
	}

	return line;
}

int main(int argc, char** argv)
{
	std::ifstream	indata;
	std::ofstream	outdata;
	std::string		filename;
	std::string		line;
	std::string		entry;
	std::string		replacement;

	if (argc != 4)
	{
		std::cerr << "Error. You must provide three arguments. Stop." << std::endl;
		return 1;
	}
	filename = argv[1];
	entry = argv[2];
	replacement = argv[3];
	indata.open(filename);
	if (!indata)
	{
		std::cerr << "Error. file " << filename << " could not be opened. Stop."
			<< std::endl;
		return 1;
	}
	outdata.open(filename.append(".replace"));
	while (std::getline(indata, line))
	{
		line = ReplceEntries(line, entry, replacement);
		outdata << line << std::endl;
	}
	indata.close();
	outdata.close();
	system("leaks Sed_is_for_losers | grep 'leaks for'");
}
