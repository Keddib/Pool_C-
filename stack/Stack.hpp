#ifndef STACK_09_HPP
#define STACK_09_HPP

class Stack
{
	private:
		int _array[10];
		int _size;
	public:
		Stack( void );
		Stack( int );
		~Stack( void );
		void reset( void );
		bool push( int );
		int  pop( void );
		void print( void );
};

#endif
