#include <iostream>

#include <iostream>
class Base
{
	private:
		int m_p;
public:
	int m_value {};
};

class Derived : public Base
{
private:
	using Base::m_value;
	using Base::m_p;

public:
	Derived(int value)
	// We can't initialize m_value, since it's a Base member (Base must initialize it)
	{
		// But we can assign it a value
		m_value = value;
		m_p = 10;
	}
};

int main()
{
	Derived derived { 7 };

	// The following won't work because m_value has been redefined as private
	std::cout << derived.m_value;

	return 0;
}
