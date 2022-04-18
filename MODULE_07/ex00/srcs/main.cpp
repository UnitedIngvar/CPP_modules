#include "whatever.hpp"
#include "Awesome.hpp"

void	frenchTest()
{
	std::cout << "___________FRENCH TEST____________" << std::endl
		<< std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl << "_________________________________" << std::endl
		<<std::endl << std::endl;
}

void	myTest()
{
	std::cout << "___________MY____TEST____________" << std::endl
		<< std::endl;
	int left = 7;
	int right = 5;

	std::cout << "Before swap:" << std::endl;
	std::cout << "left: " << left << ", right: " << right << std::endl;
	std::cout << "Min: " << min(left, right) << std::endl;
	std::cout << "Max: " << max(left, right) << std::endl;
	swap(left, right);
	std::cout << "After swap:" << std::endl;
	std::cout << "left: " << left << ", right: " << right << std::endl;
	std::cout << "Min: " << min(left, right) << std::endl;
	std::cout << "Max: " << max(left, right) << std::endl;
	std::cout << "_________________________________" << std::endl
		<< std::endl;
}

void awesomeTest()
{
	std::cout << "___________AWESOME____TEST____________" << std::endl
		<< std::endl;
	Awesome left(5);
	Awesome right(7);

	std::cout << "Before swap:" << std::endl;
	std::cout << "left: " << left << ", right: " << right << std::endl;
	std::cout << "Min: " << min(left, right) << std::endl;
	std::cout << "Max: " << max(left, right) << std::endl;
	swap(left, right);
	std::cout << "After swap:" << std::endl;
	std::cout << "left: " << left << ", right: " << right << std::endl;
	std::cout << "Min: " << min(left, right) << std::endl;
	std::cout << "Max: " << max(left, right) << std::endl;
	std::cout << "_________________________________" << std::endl
		<< std::endl;
}

int	main()
{
	myTest();
	frenchTest();
	awesomeTest();
}
