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
	return (_value);
}

void	Fixed::setRawBits( int const raw) {
	_value = raw;
}

Fixed::Fixed(const int n) {
	puts("Int constructor called");
	_value = n << _fractional;
	return;
}

Fixed::Fixed(const float n) {
	puts("Float constructor called");
	_value = roundf(n * (1 << _fractional));
	return;
}

float Fixed::toFloat( void ) const {
	return ((float) (_value) / (1 << _fractional));
}

int		Fixed::toInt( void ) const {
	return (_value >> _fractional);
}

std::ostream & operator << (std::ostream & o, const Fixed & f) {
	return o << f.toFloat();
}
