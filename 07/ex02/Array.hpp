#ifndef __ARRAY_H__
#define __ARRAY_H__
#include <string>
#include <iostream>

template <class T>
class Array
{
private:
	unsigned int	_size;
	T				*_arr;
public:
	Array() : _size(0), _arr(new T[0]) {};
	Array(unsigned int i) : _size(i), _arr(new T[_size]) {};
	Array( const Array &rhs ) : _size(rhs._size), _arr(new T[_size])
	{
		for(int i = 0; i < _size; i++)
			_arr[i] = rhs._arr[i];
	}
	Array operator=(const Array &rhs)
	{
		_size = rhs._size;
		delete[] _arr;
		_arr = new T[_size];
		for(int i = 0; i < _size; i++)
			_arr[i] = rhs._arr[i];
	}
	T &operator[](unsigned int i)
	{
		if (i >= _size)
			throw std::out_of_range("array out of range");
		return (_arr[i]);
	}
	unsigned int getSize() { return _size; };
	~Array()
	{
		std::cout << "Delete" << std::endl;
		if (_arr)
			delete [] _arr;
	};
};

#endif // __ARRAY_H__