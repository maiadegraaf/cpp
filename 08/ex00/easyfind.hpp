#ifndef __EASYFIND_H__
#define __EASYFIND_H__
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T cont, int i)
{
	typename T::iterator ret;
	ret = std::find(cont.begin(), cont.end(), i);
	if (*ret != i)
		throw std::out_of_range("Doesn't exist in container.");
	return ret;
}

#endif // __EASYFIND_H__