#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() :
	_value(0)
{
	puts("Default constructor called");
	return;
}

Fixed::~Fixed() {
	puts("Destructor called");
	return;
}

Fixed::Fixed(const Fixed & a) {
	puts("Copy constructor called");
	*this = a;
	return;
}

Fixed & Fixed::operator = (const Fixed & rhs) {
	puts("Assignation operator called");
	if (this != &rhs ) {
		setRawBits(rhs.getRawBits());
	}
	return *this;
}

int	Fixed::getRawBits( void ) const {
	puts("getRawBits member function called");
	return (_value);
}

void	Fixed::setRawBits( int const raw) {
	_value = raw;
}
