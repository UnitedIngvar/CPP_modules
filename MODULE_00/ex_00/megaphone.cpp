#include <iostream>

int main(int ac, char **av)
{
	int		word_count;
	int		char_count;
	char	c;

	word_count = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++word_count])
		{
			char_count = 0;
			while (av[word_count][char_count])
			{
				c = toupper(av[word_count][char_count]);
				std::cout << c;
				char_count++;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
