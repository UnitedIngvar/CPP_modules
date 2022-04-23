
#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	int arr[] = {5, 4, 2, 1, 7, 8, 35, 67, 87, 10};
	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	try
	{
		std::cout << "Trying to find 10" << std::endl;
		std::cout << *easyfind(v, 10) << std::endl;
		std::cout << "Trying to find 42" << std::endl;
		std::cout << *easyfind(v, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
