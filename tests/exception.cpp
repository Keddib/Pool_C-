#include <iostream>


class A
{
	public:
		A() { std::cout << "A start\n"; }
		A(A const &a) { std::cout << "A Copy\n"; }
		~A(){ std::cout << "A done\n"; }
		void ppp() const { std::cout << "HELLO\n"; }
};

void func()
{	A b;
	throw b;
}

void func2(A const &a)
{
	a.ppp();
}


int main()
{
	// try {
		func();
	// }
	// catch ( A &a )
	// {
	// 	std::cout << "catched\n";
	// 	a.ppp();
	// 	func2(a);
	// }
}
