#ifndef ARRAY_653_HPP
#define ARRAY_653_HPP

template <class T>
class Array
{
	private:
		T *m_array;
		unsigned int m_size;
	public:
		typedef unsigned int t_size;
		Array();
		Array( unsigned int );
		~Array();
		Array( const Array& );
		Array& operator=( const Array& );
		T& operator[]( unsigned int );
		unsigned int size();
};

template <class T>
Array<T>::Array() : m_size(0), m_array( new T() ) {}

template <class T>
Array<T>::Array( unsigned int size ) : m_size(size), m_array( new T[size] ) {}

template <class T>
Array<T>::~Array()
{
	delete[] m_array;
}

template <class T>
Array<T>::Array( const Array<T> &other ): m_array()
{
	*this = other;
}

template <class T>
Array<T>& Array<T>::operator=( const Array &other )
{
	if (m_array)
		delete[] m_array;
	m_size = other.m_size;
	for (t_size i= 0; i != m_size; i++)
		m_array[i] = other.m_array[i];
	return *this;
}

template <class T>
T& Array<T>::operator[]( unsigned int index )
{
	return m_array[index];
}

template <class T>
unsigned int Array<T>::size()
{
	return m_size;
}

#endif
