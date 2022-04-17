#include "whatever.hpp"
#include <iostream>

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
	int leftInt = 7;
	int rightInt = 5;

	std::cout << "Before swap:" << std::endl;
	std::cout << "Min: " << min(leftInt, rightInt) << std::endl;
	std::cout << "Max: " << max(leftInt, rightInt) << std::endl;
	swap(leftInt, rightInt);
	std::cout << "After swap:" << std::endl;
	std::cout << "Min: " << max(leftInt, rightInt) << std::endl;
	std::cout << "Max: " << min(leftInt, rightInt) << std::endl;
	std::cout << "_________________________________" << std::endl
		<< std::endl;
}

int	main()
{
	myTest();
	frenchTest();
}
