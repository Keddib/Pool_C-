#ifndef BASE_99_HPP
#define BASE_99_HPP

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base &p);

#endif
