#include <iostream>
#include <exception>

/*
** dynamic_cast can be used only with pointers and references to objects. Its purpose is to ensure that the result of
** the type conversion is a valid complete object of the requested class.
** Therefore, dynamic_cast is always successful when we cast a class to one of its base classes:
*/

class CBase { };
class CDerived: public CBase { };

class PolyCBase { virtual void dummy() {} };
class PolyCDerived: public PolyCBase { int a; };


int main()
{
	CBase b; CBase* pb;
	CDerived d; CDerived* pd;

	pb = dynamic_cast<CBase*>(&d);     // ok: derived-to-base
	// pd = dynamic_cast<CDerived*>(&b);  // wrong: base-to-derived except on polymorphic class


/*
** The second conversion in this piece of code would produce a compilation error since base-to-derived conversions
** are not allowed with dynamic_cast unless the base class is polymorphic.
** When a class is polymorphic, dynamic_cast performs a special checking during runtime to ensure that the
** expression yields a valid complete object of the requested class:
*/


	try
	{
		PolyCBase * pba = new PolyCDerived;
		PolyCBase * pbb = new PolyCBase;
		PolyCDerived * pd;
		// PolyCBase &rba = *pba;
		// PolyCBase &rbb = *pbb;
		// PolyCDerived &rpd = dynamic_cast<PolyCDerived&>(rba);
		// PolyCDerived &rpd1 = dynamic_cast<PolyCDerived&>(rbb);

		pd = dynamic_cast<PolyCDerived*>(pba);
		if (pd==0)
			std::cout << "Null pointer on first type-cast" << std::endl;

		pd = dynamic_cast<PolyCDerived*>(pbb);
		if (pd==0)
			std::cout << "Null pointer on second type-cast" << std::endl;

	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what();
	}
/*
** When dynamic_cast cannot cast a pointer because it is not a complete object of the required class -as in the
** second conversion in the previous example- it returns a null pointer to indicate the failure. If dynamic_cast is used
** to convert to a reference type and the conversion is not possible, an exception of type bad_cast is thrown instead.
*/

/*
** D_cast can cast null pointers of any types and void *pointers too;
*/


	return 0;
}
