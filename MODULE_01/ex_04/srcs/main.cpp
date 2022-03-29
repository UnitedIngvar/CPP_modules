#include <fstream>
#include <iostream>

std::string	ReplceEntries(
	std::string line,
	std::string entry,
	std::string replacement)
{
	for (size_t i = 0; i < line.length(); i++)
	{
		if (line.compare(i, entry.length(), entry))
		{
			line.insert(i, replacement);
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
	}
	filename = argv[1];
	entry = argv[2];
	replacement = argv[3];
	indata.open(filename);
	if (!indata)
	{
		std::cerr << "Error. file " << filename << " could not be opened. Stop."
			<< std::endl;
	}
	outdata.open(filename.append(".replace"));
	printf("line: %s", line.c_str());
	indata >> line;
	while (!indata.eof())
	{
		line = ReplceEntries(line, entry, replacement);
		outdata << line;
		indata >> line;
	}
}
