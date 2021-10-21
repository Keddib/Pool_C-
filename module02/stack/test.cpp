#include "Stack.hpp"
#include <string>
#include <iostream>

// class B
// {
// 	public:
// 		B () {}
// 		void foo(){std::cout << "===\n";}
// 	private:
// 		int x = 0;
// };

// class A
// {
// 	public:
// 		A (){}
// 		~A () { delete member; }
// 		B *member = new B ();
// };



// int main()
// {
// 	A a;
// 	if (1)
// 	{
// 		A b = a;
// 	}
// 	else
// 	{
// 		A *c = new A (a);
// 		delete c;
// 	}
// 	a.member->foo();
// }

int main()
{
		Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();
	return 0;
}
