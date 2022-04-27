#include "MutantStack.hpp"
#include <iostream>

void	IteratorsTest()
{
	std::cout
		<< "_________ITERATORS_TESTS____________" << std::endl
		<< std::endl;

	MutantStack<int> stack;
	std::cout << "pushing 1 2 3 4 in the mutant stack" << std::endl;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);

	std::cout << "Printing the numbers using mutant stack iterators..." << std::endl;
	for (MutantStack<int>::iterator i = stack.begin(); i != stack.end(); i++)
	{
		std::cout << *i << " ";
	}

	std::cout << std::endl;

	std::cout
		<< "________________________________" << std::endl
		<< std::endl;
}

int main()
{
	IteratorsTest();
}
