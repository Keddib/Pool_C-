#ifndef SPAN_535_HPP
#define SPAN_535_HPP

#include <stdexcept>
#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
	private:
		std::vector<int> m_data;
		unsigned int m_size;
	public:
		Span( unsigned int );
		~Span();
		Span ( const Span& );
		Span& operator=( const Span& );
		void addNumber( int );
		int shortestSpan() const;
		int longestSpan() const;
};

Span::Span( unsigned int n ) : m_data(0), m_size(n) {}

Span::~Span() {}

Span::Span( const Span &other )
: m_data(other.m_data), m_size(other.m_size) {}

Span& Span::operator=( const Span &other )
{
	m_data = other.m_data;
	m_size = other.m_size;
	return *this;
}

void Span::addNumber( int number )
{
	if (m_data.size() >= m_size )
		throw std::out_of_range("Range is full");
	m_data.push_back(number);
}

int Span::shortestSpan() const
{
	if (m_data.size() <= 1)
		return 0;
	std::vector<int> tmp(m_data);
	std::sort(tmp.begin(), tmp.end());
	return tmp[1] - tmp[0];
}

int Span::longestSpan() const
{
	if (m_data.size() <= 1)
		return 0;
	std::vector<int> tmp(m_data);
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

#endif
