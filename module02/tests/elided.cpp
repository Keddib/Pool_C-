#include <iostream>
class Something
{
	private:
		static int id;
public:
	Something()
	{
		std::cout << id++ <<  " Defaylt const\n";
	}
	~Something()
	{
		std::cout << "destructor called\n";
	}
	Something(const Something&)
	{
		std::cout << "Copy constructor called\n";
	}
};

int Something::id = 0;

Something poo(Something x)
{
	return x; //copy con called;
}


Something foo()
{
	return Something(); // copy constructor normally called here
}
Something goo()
{
	Something s;
	return s; // copy constructor normally called here
}

int main()
{
	int a = 10;
	const int &s = 20;

	std::cout << "Initializing s1\n";
	Something s1 = foo(); // copy constructor normally called here

	std::cout << "Initializing s2\n";
	Something s2 = goo(); // copy constructor normally called here
	
	std::cout << "Initializing s3\n";
	Something s3 = poo(s2); // copy constructor normally called here
}
