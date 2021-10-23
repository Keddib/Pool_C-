#include "Stack.hpp"
#include <iostream>

Stack::Stack(): _size(0){	}

Stack::Stack(int x)
{
	for(_size = 0; _size < 10; _size++)
		_array[_size] = x;
}

Stack::~Stack() {}

void	Stack::reset( void )
{
	for(_size = 0; _size < 10; _size++)
		_array[_size] = 0;
	_size = 0;
}

bool	Stack::push( int x )
{
	if (_size != 10)
	{
		_array[_size] = x;
		_size ++;
		return true;
	}
	return false;
}

int		Stack::pop( void )
{
	int tmp(0);
	if (_size > 0)
	{
		_size--;
		tmp = _array[_size];
		_array[_size] = 0;
		return tmp;
	}
	return 0;
}

void	Stack::print( void )
{
	int i = _size - 1;
	std::cout << "( ";
	while (i >= 0)
		std::cout << _array[i--] << " ";
	std::cout << " )\n";
}
