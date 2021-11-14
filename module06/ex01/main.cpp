#include <cstdint>
#include <iostream>


struct Data2
{
	int a;
	int b;
	float c;
};


class Data
{
	int a; int b;
	public:
		Data(): a(10), b(20) { }
		void display()
		{
			std::cout << a << " " << b << '\n';
		}
};


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t p)
{
	return reinterpret_cast<Data *>(p);
}


int main()
{
	Data obj;
	uintptr_t ptrValue;
	ptrValue = serialize(&obj);
	std::cout << ptrValue << '\n';
	Data *pObj = deserialize(ptrValue);
	pObj->display();
}
