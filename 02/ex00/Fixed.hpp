#ifndef __FIXED_H__
#define __FIXED_H__
#include <string>
#include <iostream>

class Fixed
{
private:
	int 				FixedPoint;
	static const int	FractBits = 8;
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(Fixed other);
	~Fixed();
	int getRawBits(void);
	void setRawBits(int const raw);
};

#endif // __FIXED_H__