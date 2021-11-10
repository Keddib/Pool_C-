#include <iostream>

class A
{
	protected:
		int m_test;
};

class B  : protected A
{

};


class C : public B
{
	public:
		void print() 
		{
			m_test = 10;
			std::cout << m_test;
		}
};


int main()
{
	C c; 
	c.print();
}
