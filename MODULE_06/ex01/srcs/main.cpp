#include <string>
#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int 	main()
{
	Data data;
	data.n = 10;
	data.str1 = "Latin language";
	data.str2 = "English language";

	std::cout << "before serializing:" << std::endl;
	std::cout << "dtat.n: "<< data.n << std::endl;
	std::cout << "dtat.str1: "<< data.str1 << std::endl;
	std::cout << "dtat.str2: "<< data.str2 << std::endl << std::endl
		<< std::endl;

	uintptr_t ptr = serialize(&data);
	Data *deserialized_data = deserialize(ptr);

	std::cout << "before serializing:" << std::endl;
	std::cout << "dtat.n: "<< deserialized_data->n << std::endl;
	std::cout << "dtat.str1: "<< deserialized_data->str1 << std::endl;
	std::cout << "dtat.str2: "<< deserialized_data->str2 << std::endl;
}
