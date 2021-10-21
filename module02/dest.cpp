#include <iostream>
#include <cassert>
#include <cstddef>

class Num
{
	private:
		int _num;
	public:
		Num( int n ): _num(n) {std::cout << "const nun\n";}
		Num( ): _num(0) {std::cout << "const nun\n";}
		~Num( void ) {std::cout << "dest nun\n";}
		Num(const Num& x)
		{
			this->_num = x._num;
			std::cout << "copy constructor called!" << std::endl;
		}
		Num operator = (Num const & other)
		{
			std::cout << "assing operator\n";
			this->_num = other._num;
			return *this;
		}
		
		Num operator + (Num const & other)
		{
			std::cout << "add operator\n";
			return (Num(_num + other._num));
		}	
		
		Num operator + (int x)
		{
			return Num(_num + x);
		}
		int getV(){ return _num; }
};


int main()
{
	Num a(10);
	Num b(12);
	Num c;

	c = b = a; 

	std::cout << "The num = : " << c.getV() << "  " << b.getV() << '\n';


	return 0;
} 
