#ifndef EASYFIND_121_HPP
#define EASYFIND_121_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyFind( T &c, int elem )
{
	typename T::iterator iter;
	iter = std::find(c.begin(), c.end(), elem);
	return iter;
}

#endif
