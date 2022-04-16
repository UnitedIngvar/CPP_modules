#include "Scalar.hpp"

int main(void)
{
	std::string i = "23";
	std::string f = "23.34643747567f";
	std::string d = "4.3536464";
	std::string c = "g";
	std::string inff = "+inff";
	std::string inf = "-inf";
	std::string nanf = "nanf";
	std::string nan = "nan";

	Scalar sci(i);
	Scalar scf(f);
	Scalar scd(d);
	Scalar scc(c);
	Scalar scinff(inff);
	Scalar scdinf(inf);
	Scalar scnanf(nanf);
	Scalar scnan(nan);

	sci.Print();
	scf.Print();
	scd.Print();
	scc.Print();
	scinff.Print();
	scdinf.Print();
	scnanf.Print();
	scnan.Print();
}

