// class type-casting
#include <iostream>
using namespace std;

class CDummy {
	long long i,j;
	public:
	CDummy(int a, int b):i(a), j(b) {}
	void f() {}
};

class CAddition {
	int x,y;
	public:
	CAddition (int a, int b) { x=a; y=b; }
	int result() { return x+y;}
};

int main () {
	CDummy d(10, 20);
	CAddition * padd;
	// int number = -42;
	float fl = 0.1f;
	// int *pnum = &number;
	float *pfloat = &fl;
	int *x = (int *)pfloat; //c_cast allow casting from any pointer to other
	std::cout << pfloat << '\n';
	std::cout << x << '\n';
	std::cout << *pfloat << '\n';
	std::cout << *x << '\n';
	padd = (CAddition*) &d;
	cout << padd->result() << '\n';
	int *test1 = x;
	short *test2 = (short *)test1;
	test2 = static_cast<short *>(test1);
	return 0;
}
