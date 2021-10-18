#include "Stack"
#include <iostream>

Stack::Stack(): _size(0){	}

Stack::Stack(int x)
{
	for(_size = 0; _size < 10; _size++)
		_array[_size] = x;
}

Stack::~Stack() {}

void	reset( void )
{
	for(_size = 0; _size < 10; _size++)
		_array[_size] = 0;
	_size = 0;
}

void	push( int x )
{
	_array[_size] = x;
	_size ++;
}

int		pop( void )
{
	int tmp
	_size--;
	tmp = _array[_size];
	_array[_size] = 0;
	return tmp;
}
 
