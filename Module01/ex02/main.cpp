#include <iostream>
#include <string>

int main()
{
	//declaring a string, a pointer to string, and a reference to string;
	std::string s = "HI THIS IS BRAIN";
	std::string &stringREF = s;
	std::string *stringPTR = NULL;
	stringPTR = &s;
	
	//display the adress of the string using bothe the pointer and reference;
	std::cout << &s << '\n';
	std::cout << &(*stringPTR) << '\n';
	std::cout << &stringREF << '\n';
	
	//last display the string using the pointer and the reference ;
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
	return (0);
}
