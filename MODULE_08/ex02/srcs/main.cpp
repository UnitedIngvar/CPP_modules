#include "MutantStack.hpp"
#include <iostream>
#include <list>

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

void	SubjectTest()
{
	std::cout
		<< "_________SUBJECT_TESTS____________" << std::endl
		<< std::endl;

	std::cout << "mutant stack output: " << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top(): " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size(): " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it_s = mstack.begin();
	MutantStack<int>::iterator ite_s = mstack.end();
	++it_s;
	--it_s;
	while (it_s != ite_s)
	{
		std::cout << *it_s << " ";
		++it_s;
	}

	std::cout << std::endl;

	std::cout << "list output: " << std::endl;

	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "list.back(): " << list.back() << std::endl;
	list.pop_back();
	std::cout << "list.size(): " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout
		<< "________________________________" << std::endl
		<< std::endl;
}

int main()
{
	IteratorsTest();
	SubjectTest();
}
