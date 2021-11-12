#include <iostream>

#include <string>

template <typename T>
void swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	max(const T &a, const T &b)
{
	if (a > b)
		return a;
	return b;
}

template <typename T>
T	min(const T &a, const T &b)
{
	if (a < b)
		return a;
	return b;
}


template <class T>
void coco(T a);

template<>
void coco(int a)
{
	std::cout << a << '\n';
}


int main()
{
	coco(20);
	int a = 10;
	int b = 20;

	// float x = 1.01f;
	// float y = 2.01f;

	// std::string s("khalid");
	// std::string s1("Eddib");

	min<float>(2, 2.2f);
	// swap(a, b);

	// // swap<float>(10.2, 20.2);
	// // min<char> (97, 98);

	// std::cout << a << '\n';
	// std::cout << b << '\n';
	// std::cout << x << '\n';
	// std::cout << y << '\n';
	// std::cout << s << '\n';
	// std::cout << s1 << '\n';

	return (0);
}
