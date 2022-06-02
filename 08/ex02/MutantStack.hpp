#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__
#include <iostream>
#include <string>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	typedef T* iterator;
	MutantStack() {}
	~MutantStack() {}
	MutantStack( const MutantStack &rhs )
	{
		*this = rhs;
	}
	MutantStack& operator=( const MutantStack &rhs)
	{
		*this = rhs;
		return *this;
	}
	iterator end(void)
	{
		return (&this->top());
	}
	iterator begin(void)
	{
		iterator last = &this->top();
		for (int i = this->size(); i > 1; i--)
			last--;
		return last;
	}
};

#endif // __MUTANTSTACK_H__