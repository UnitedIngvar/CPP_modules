#include "Utils.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	std::srand(time(NULL));
	Base *someConcrete1 = generate();
	Base *someConcrete2 = generate();
	Base *someConcrete3 = generate();

	identify(someConcrete1);
	identify(someConcrete2);
	identify(someConcrete3);
	identify(*someConcrete1);
	identify(*someConcrete2);
	identify(*someConcrete3);
}
