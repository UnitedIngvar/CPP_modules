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
	std::cout << "adding " << size << " numbers to the span..." << std::endl;
	for (int i = 0; i < size; i++)
	{
		span.addNumber(i * 100);
	}

	std::cout << "longest span: " << span.longestSpan() << std::endl;
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;

	std::cout
		<< "______________________________" << std::endl
		<< std::endl;
}

void	exceptionsTest()
{
	std::cout
		<< "______EXCEPTIONS_TEST________" << std::endl
		<< std::endl;

	Span tooShortSpan = Span(2);
	std::cout << "trying to find longest and shortest span within too short number sets..."<< std::endl;
	std::cout << "Spans without numbers: " << std::endl;

	try
	{
		tooShortSpan.longestSpan();
	}
	catch(const std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
	try
	{
		tooShortSpan.shortestSpan();
	}
	catch(const std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}

	std::cout << "Spans with 1 number: " << std::endl;
	tooShortSpan.addNumber(42);
	try
	{
		tooShortSpan.longestSpan();
	}
	catch(const std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
	try
	{
		tooShortSpan.shortestSpan();
	}
	catch(const std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
	std::cout << std::endl;


	int maxSize = 5;
	std::cout << "overfilling span with the maximum size of " << maxSize << "..."<< std::endl;

	Span smallSpan = Span(maxSize);
	try
	{
		for (int i = 0; i < maxSize + 1; i++)
		{
			smallSpan.addNumber(i);
		}
	}
	catch(const std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
	std::cout << std::endl;

	std::cout
		<< "______________________________" << std::endl
		<< std::endl;
}

void	smallRandomTest()
{
	std::cout
		<< "______SMALL_RANDOM_TEST_______" << std::endl
		<< std::endl;

	int size = 4;
	int *array = new int[size];

	Span span = Span(size);
	for (int i = 0; i < size; i++)
	{
		array[i] = std::rand();
	}

	std::cout << "numbers: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
		span.addNumber(array[i]);
	}

	std::cout << std::endl;
	std::cout << "longest span: " << span.longestSpan() << std::endl;
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;

	std::cout
		<< "________________________________" << std::endl
		<< std::endl;
}

void	addNumbersTest()
{
	std::cout
		<< "________ADD_NUMBERS_TEST________" << std::endl
		<< std::endl;

	int size = 10;
	std::list<int> list = std::list<int>();
	Span span = Span(size);

	std::cout << "adding numbers to source list: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << i << " ";
		list.push_front(i);
	}
	std::cout << std::endl;

	std::cout << "passing iterators of the source list into the addNumber method of the span..." << std::endl;
	span.addNumber(list.begin(), list.end());
	std::cout << std::endl;

	std::cout << "resulting spans: " << std::endl;
	std::cout << "longest span: " << span.longestSpan() << std::endl;
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;

	std::cout
		<< "________________________________" << std::endl
		<< std::endl;
}

int	main()
{
	std::srand(0);
	limitsTest();
	largeSpansTest();
	smallRandomTest();
	exceptionsTest();
	addNumbersTest();
}
