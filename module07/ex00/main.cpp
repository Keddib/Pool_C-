#include <iostream>
#include <string>
#include "template.hpp"


class Awesome
{
	public:
		Awesome() {}
		Awesome( int n ) : _n( n ) {}
		Awesome& operator=(const Awesome &other) { _n = other._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int getV(){ return _n; }
	private:
		int _n;
};



// this just for explaining ADL for the case of swap with std::string
namespace NS {

class A {};

void f(A&, int) { std::cout << "func f called\n";}

}  // namespace NS

int main()
{
	// int example
	int number1 = 10;
	int number2 = 20;

	std::cout << "befor : number 1 = " << number1 << " number 2 = " << number2 << '\n';
	swap<int>(number1, number2); // specify which type the template func will take;
	// swap<>(number1, number2); // let the compiler find out the type
	// swap(number1, number2); //
	std::cout << "after : number 1 = " << number1 << " number 2 = " << number2 << '\n';

	// double example
	double doub1 = 20.50;
	double doub2 = 25.29;

	std::cout << "before bool1 = " << doub1 << " doub2 = " << doub2 << '\n';
	swap<double>(doub1, doub2);
	// swap<>(doub1, doub2);
	// swap(doub1, doub2);
	std::cout << "after bool1 = " << doub1 << " doub2 = " << doub2 << '\n';

	// string example ***this introduce as to ADL
	std::string s("khalid");
	std::string s1("Eddib");

	std::cout << "before s = " << s << " s = " << s1 << '\n';
	::swap<std::string>(s, s1);
	std::cout << "after s = " << s << " s = " << s1 << '\n';

	// my class example
	Awesome aw1(20);
	Awesome aw2(120);

	std::cout << "before : aw1 = " << aw1.getV() << " aw2 = " << aw2.getV() << " \n";

	swap<Awesome>(aw1, aw2);
	std::cout << "after : aw1 = " << aw1.getV() << " aw2 = " << aw2.getV() << " \n";


//  ADL argument dependent lookup example just for expalanation purposes;
	NS::A a;
	f(a, 0);  // Calls NS::f.

	return 0;
}
