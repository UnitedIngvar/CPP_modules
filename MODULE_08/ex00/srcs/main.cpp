#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "easyfind.hpp"

void	listTest()
{
	std::cout
	<< "_________LIST_TEST____________" << std::endl
		<< std::endl;
	int arr[] = {5, 4, 2, 1, 7, 8, 35, 67, 87, 10};
	std::list<int> list(arr, arr + sizeof(arr) / sizeof(int));

	for (std::list<int>::const_iterator i = list.cbegin(); i != list.cend(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	try
	{
		std::cout << "Trying to find 10 (there is such number)" << std::endl;
		std::cout << *easyfind(list, 10) << std::endl;
		std::cout << "Trying to find 42 (there is no such number)" << std::endl;
		std::cout << *easyfind(list, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl
		<< "_____________________________________" << std::endl
		<< std::endl;
}

void	vectorTest()
{
	std::cout
	<< "_________VECTOR_TEST____________" << std::endl
		<< std::endl;
	int arr[] = {5, 4, 2, 1, 7, 8, 35, 67, 87, 10};
	std::vector<int> vector(arr, arr + sizeof(arr) / sizeof(int));

	for (std::vector<int>::const_iterator i = vector.begin(); i != vector.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	try
	{
		std::cout << "Trying to find 10 (there is such number)" << std::endl;
		std::cout << *easyfind(vector, 10) << std::endl;
		std::cout << "Trying to find 42 (there is no such number)" << std::endl;
		std::cout << *easyfind(vector, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl
		<< "_____________________________________" << std::endl
		<< std::endl;
}

int		main(void)
{
	vectorTest();
	listTest();
}
