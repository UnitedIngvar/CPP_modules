#include "Array.hpp"
#include <iostream>

void	TestExceptions()
{
	std::cout
	<< "_________TEST___EXCETPIONS____________" << std::endl
		<< std::endl;

	int size = 4;
	Array<int> array(size);

	std::cout << "size is " << array.size() << std::endl;
	std::cout << "printing until excetption..." << std::endl;
	for (int i = 0; i < 10000000; i++)
	{
		try
		{
			int temp = (int)array[i];
			std::cout << "array[" << i <<  "]: " << temp << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			break;
		}
	}

	std::cout << std::endl
		<< "_____________________________________" << std::endl
		<< std::endl;
}

void	TestOperators()
{
	std::cout
	<< "_________TEST___OPERATORS____________" << std::endl
		<< std::endl;
	int size = 4;

	Array<int> array(size);
	std::cout << "before assignment: array[0]: " << (int)array[0] << std::endl;
	std::cout << "before assignment: array[1]: " << (int)array[1] << std::endl;
	std::cout << "before assignment: array[2]: " << (int)array[2] << std::endl;
	std::cout << "before assignment: array[3]: " << (int)array[3] << std::endl;
	array[0] = 10;
	array[1] = 11;
	array[2] = 12;
	array[3] = 13;
	std::cout << "after assignment: array[0]: " << (int)array[0] << std::endl;
	std::cout << "after assignment: array[0]: " << (int)array[1] << std::endl;
	std::cout << "after assignment: array[0]: " << (int)array[2] << std::endl;
	std::cout << "after assignment: array[0]: " << (int)array[3] << std::endl
		<< std::endl;

	Array<int> arrayToCopy(size);

	for (int i = 0; i < size; i++)
	{
		std::cout << "before assignment: arrayToCopy[" << i <<  "]: " << (int)arrayToCopy[i] << std::endl;
	}
	std::cout << std::endl;
	arrayToCopy = array;
	for (int i = 0; i < size; i++)
	{
		std::cout << "after assignment: arrayToCopy[" << i <<  "]: " << (int)arrayToCopy[i] << std::endl;
	}

	std::cout << std::endl
	<< "_____________________________________" << std::endl
		<< std::endl;
}

void	TestAccessors()
{
	std::cout
	<< "_________TEST___ACCESSORS____________" << std::endl
		<< std::endl;
	int size = 10;

	std::cout << "Size: " << size << std::endl;

	Array<int> array(size);
	std::cout << "array.size(): " << array.size() << std::endl;
	std::cout << std::endl
	<< "_____________________________________" << std::endl
		<< std::endl;
}

int main()
{
	TestAccessors();
	TestOperators();
	TestExceptions();
}
