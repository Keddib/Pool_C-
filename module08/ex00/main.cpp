#include "EasyFind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <set>

int main()
{

	typedef std::vector<int>::iterator vec_iter;
	// declare a container (vector)
	std::vector<int> vec;

	// fill the vec and display it
	for (int i = 0; i < 10; i++)
		vec.push_back(i + 1);
	for (int i = 0; i < 10; i++)
		std::cout << vec[i] << " | ";
	std::cout << std::endl;

	// find the first element and return an iterator to it; other was return last
	vec_iter v_iter = easyFind<std::vector<int> >(vec, 117);
	if (v_iter != vec.end())
		std::cout << "value found = " << *v_iter << '\n';
	else
		std::cout << "value found not found :( \n";


	// declarinf a set container
	std::set<int> myset;
	myset.insert(7);
	myset.insert(2);
	myset.insert(-6);
	myset.insert(8);
	myset.insert(1);
	myset.insert(-4);

	// printing elements of my set
	typedef std::set<int>::iterator set_iter; // declare an iterator
	set_iter set_it = myset.begin(); // assign it to the start of the set
	while (set_it != myset.end()) // while it hasn't reach the end
	{
		std::cout << *set_it << " "; // print the value of the element it points to
		++set_it; // and iterate to the next element
	}
	std::cout << '\n';

	//find an element in thes set
	set_it = easyFind(myset, -6);
	if (set_it != myset.end())
		std::cout << "value found = " << *set_it << '\n';
	else
		std::cout << "value found not found :( \n";

	// declare a container (list)
	typedef std::list<int>::iterator list_iter; // declare an iterator
	std::list<int> li;

	// fill the li and display it
	for (int i = 0; i < 10; i++)
		li.push_back(i + 1);
	list_iter l_iter = li.begin(); // assign it to the start of the list
	while (l_iter != li.end()) // while it hasn't reach the end
	{
		std::cout << *l_iter << " "; // print the value of the element it points to
		++l_iter; // and iterate to the next element
	}
	std::cout << std::endl;

	// find the first element and return an iterator to it; other was return last
	l_iter = easyFind<std::list<int> >(li, 8);
	if (l_iter == li.end())
		std::cout << "value found not found :( \n";
	else
		std::cout << "value found = " << *l_iter << '\n';

}
