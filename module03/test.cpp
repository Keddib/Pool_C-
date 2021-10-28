#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "A\n";
    }
	~A() {std::cout << " A end\n";	}
};

class B: public A
{
public:
    B()
    {
        std::cout << "B\n";
    }

	~B() {std::cout << "B end\n";	}
};

class C: public B
{
public:
    C()
    {
        std::cout << "C\n";
    }
	~C() {std::cout << "C end\n";	}
};

class D: public C
{
public:
    D()
    {
        std::cout << "D\n";
    }
	~D() {std::cout << "D end\n";	}
};

int main()
{
    std::cout << "Constructing D: \n";
    D d;
	D a;
	D x;
}

