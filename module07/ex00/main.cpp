#include <iostream>
#include <string>
#include "template.hpp"

// this just for explaining ADL for the case of swap with std::string
namespace NS {

class A {};

void f(A& a, int i) { std::cout << "func f called\n";}

}  // namespace NS

int main()
{
	// int example
	int number1 = 10;
	int number2 = 20;

	swap<int>(number1, number2);
	// swap<>(number1, number2);
	// swap(number1, number2);
	std::cout << "number 1 = " << number1 << " number 2 = " << number2 << '\n';

	// double example
	double doub1 = 20.50;
	double doub2 = 25.29;

	swap<double>(doub1, doub2);
	// swap<>(doub1, doub2);
	// swap(doub1, doub2);
	std::cout << "bool1 = " << doub1 << " doub2 = " << doub2 << '\n';

	// string example ***this introduce as to ADL
	std::string s("khalid");
	std::string s1("Eddib");

	::swap<std::string>(s, s1);
	std::cout << "s = " << s << " s = " << s1 << '\n';

//  ADL argument dependent lookup example just for expalanation purposes;
	NS::A a;
	f(a, 0);  // Calls NS::f.

	return 0;
}
