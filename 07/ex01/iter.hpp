#ifndef __ITER_H__
#define __ITER_H__
#include <string>
#include <iostream>

template<typename T>
void iter(T arr[], size_t len, void (*f)(T&))
{
	for(int i = 0; i < len; i++)
		f(arr[i]);
}

#endif // __ITER_H__