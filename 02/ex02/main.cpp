#include "Fixed.hpp"

int main( void ) {
	Fixed a(1);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c(3);
	Fixed const d = (c - a);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << d << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}