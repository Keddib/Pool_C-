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

	MutantStack<int> s;
	s.push(1220);
	s.push(1520);
	s.push(1123230);
	s.push(130);
	s.push(-20);
	s.push(220);
	s.push(20);
	s.push(-1220);
	fourth = s;
	// MutantStack<int>::iterator i = s
	for (MutantStack<int>::iterator it = s.begin(); it != s.end(); it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
	std::cout << s.top() << '\n';
	std::cout << fourth.top() << '\n';
}
