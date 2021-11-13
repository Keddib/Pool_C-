#ifndef MUTANTSTACK_234_HPP
#define MUTANTSTACK_234_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( );
		~MutantStack( );
		MutantStack( const MutantStack& );
		MutantStack& operator=( const MutantStack& );
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin( );
		iterator end( );
};

template <class T>
MutantStack<T>::MutantStack() {}

template <class T>
MutantStack<T>::MutantStack( const MutantStack<T> &other )
{
	*this = other;
}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack<T> &other )
{
	this->c = other.c;
	return *this;
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin( )
{
	return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end( )
{
	return this->c.end();
}

#endif
