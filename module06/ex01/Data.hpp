#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

// struct Data
// {
// 	int a;
// 	int b;
// 	float c;
// };


class Data
{
	int a; int b;
	public:
		Data(): a(1000), b(2000) { }
		void display()
		{
			std::cout << a << " " << b << '\n';
		}
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t p);

#endif
