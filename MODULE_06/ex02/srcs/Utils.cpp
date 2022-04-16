#include "Utils.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static int randomNum(int min, int max)
{
	int rand = std::rand() % max + min;
	return rand;
}

Base	*generate(void)
{
	int random = randomNum(1, 3);
	std::cout << "random is " << random << std::endl;
	if (random == 1)
	{
		std::cout << "reutrning A" << std::endl;
		return new A();
	}
	else if (random == 2)
	{
		std::cout << "reutrning B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "reutrning C" << std::endl;
		return new C();
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "This is A type" << std::endl;
		return;
	}

	if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "This is B type" << std::endl;
		return;
	}

	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "This is C type" << std::endl;
		return;
	}
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "This is A type" << std::endl;
	}
	catch (std::exception)
	{
	}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "This is B type" << std::endl;
	}
	catch (std::exception)
	{
	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "This is C type" << std::endl;
	}
	catch(const std::exception& e)
	{

	}
}
