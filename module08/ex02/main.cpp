#include "MutantStack.hpp"
#include <iostream>
#include <deque>
#include <vector>

int main()
{

	MutantStack<int> first;						// empty stack
	MutantStack<int> second;			// stack initialized to copy of deque
	MutantStack<int> third;						// empty stack using vector
	MutantStack<int> fourth;

	std::cout << "size of first: " << first.size() << '\n';
	std::cout << "size of second: " << second.size() << '\n';
	std::cout << "size of third: " << third.size() << '\n';
	std::cout << "size of fourth: " << fourth.size() << '\n';

	MutantStack<int> s1;
	s1.push(1220);
	s1.push(1520);
	s1.push(1123230);
	s1.push(130);
	s1.push(-20);
	s1.push(220);
	s1.pop();
	s1.push(20);
	s1.push(-1220);
	s1.push(-1);
	s1.push(1020);
	s1.push(320);
	fourth = s1;
	// MutantStack<int>::iterator i = s
	for (MutantStack<int>::iterator it = s1.begin(); it != s1.end(); it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
	std::cout << s1.top() << '\n';
	std::cout << fourth.top() << '\n';

	MutantStack<std::string> s2;
	s2.push("hello");
	s2.push("world");
	s2.push("we");
	s2.push("are");
	s2.push("1337");
	s2.push("FISL");
	s2.push(":D");
	s2.push("zZZ");
	s2.pop();
	for (MutantStack<std::string>::iterator it = s2.begin(); it != s2.end(); it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
	std::cout << s2.top() << '\n';
	std::cout << "size of s1: " << s1.size() << '\n';
	std::cout << "size of s2: " << s2.size() << '\n';
}
