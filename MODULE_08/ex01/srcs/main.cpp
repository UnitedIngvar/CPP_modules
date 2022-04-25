#include "Span.hpp"
#include <limits>
#include <iostream>

void	limitsTest()
{
	std::cout
	<< "_________LIMITS_TEST____________" << std::endl
		<< std::endl;

	int	array[] = { INT_MAX, 6, INT_MIN };

	Span span = Span(3);
	span.addNumber(array[0]);
	span.addNumber(array[1]);
	span.addNumber(array[2]);
	std::cout << "numbers: ";
	for (int i = 0; i < 3; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
	std::cout << "longest span: " << span.longestSpan() << std::endl;
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;

	std::cout
	<< "________________________________" << std::endl
		<< std::endl;
}


void	largeSpansTest()
{
	std::cout
	<< "______LARGE_SPANS_TEST__________" << std::endl
		<< std::endl;
	int	size = 10000;

	Span span = Span(size);
	for (int i = 0; i < size; i += 100)
	{
		span.addNumber(i);
	}

	std::cout << "longest span: " << span.longestSpan() << std::endl;
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;

	std::cout
	<< "______________________________" << std::endl
		<< std::endl;
}

int	main()
{
	std::srand( time(NULL) );
	limitsTest();
	largeSpansTest();
}
