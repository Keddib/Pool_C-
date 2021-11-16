#include "iter.hpp"
#include <iostream>
#include <vector>


class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template<typename T>
void printElement(T &element)
{
	std::cout << element << std::endl;
}

template<typename T>
void addElement(T &element)
{
	element += 1;
}


int main()
{
	double arrayd[4] = {10.30, 20.40, 30.59, 40.60};
	int arrayi[4] = {10, 20, 30, 40};
	std::string s[4] = {"aaa", "bbbb", "cccc", "fffff"};
	Awesome tab2[5];

	iter(tab2, 5, printElement);
	iter<double, int>(arrayd, 4, printElement);
	iter<>(arrayi, 4, addElement);
	iter<>(arrayi, 4, printElement);
	iter(s, 4, printElement);
}
