#include <cstdint>
#include <iostream>
#include "Data.hpp"

int main()
{
	Data obj;

	uintptr_t ptrValue;
	ptrValue = serialize(&obj);
	Data *pObj = deserialize(ptrValue);
	std::cout << std::hex << "0x"<< ptrValue << '\n';
	std::cout << pObj << '\n';
	pObj->display();
	// std::cout << obj.a << '\n';
	// std::cout << obj.b << '\n';
	// std::cout << obj.c << '\n';
}
