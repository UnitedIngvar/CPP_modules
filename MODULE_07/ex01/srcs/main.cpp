#include "Awesome.hpp"
#include "Iter.hpp"

void checklistTest()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter(tab, 5, &print);
	iter(tab2, 5, &print);
}

int main()
{
	checklistTest();
}
