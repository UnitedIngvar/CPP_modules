#include "Awesome.hpp"
#include "Iter.hpp"

void	paramFunction1(int arg)
{
	std::cout << "printing an int arg " << arg << " in paramFunction1" << std::endl;
}

void	paramFunction2(Awesome arg)
{
	std::cout << "printing an Awesome arg " << arg << " in paramFunction2" << std::endl;
}

void	checklistTest()
{
	std::cout << "_________CHECKLIST_____TEST__________" << std::endl
		<< std::endl;

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter(tab, 5, print<int>);
	iter(tab2, 5, print<Awesome>);

	std::cout << std::endl << std::endl
	<< "_____________________________________" << std::endl
		<< std::endl;
}

void	MyTest()
{
	std::cout << "_________MY__________TEST__________" << std::endl
		<< std::endl;

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter(tab, 5, paramFunction1);
	iter(tab2, 5, paramFunction2);

	std::cout << std::endl << std::endl
	<< "_____________________________________" << std::endl
		<< std::endl;
}

int	main()
{
	checklistTest();
	MyTest();
}
