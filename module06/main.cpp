// class type-casting
#include <iostream>
using namespace std;

class CDummy {
	long long i,j;
	public:
	CDummy(int a, int b):i(a), j(b) {}
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
	padd = (CAddition*) &d;
	cout << padd->result();
	return 0;
}
