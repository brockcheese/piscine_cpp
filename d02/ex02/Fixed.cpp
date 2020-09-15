#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() :
	_value(0)
{
	return;
}

Fixed::~Fixed() {
	return;
}

Fixed::Fixed(const Fixed & a) {
	*this = a;
	return;
}

Fixed & Fixed::operator = (const Fixed & rhs) {
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
	_value = n << _fractional;
	return;
}

Fixed::Fixed(const float n) {
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

bool Fixed::operator > (const Fixed &rhs) const {
	return (_value > rhs.getRawBits());
}

bool Fixed::operator < (const Fixed &rhs) const {
	return (_value < rhs.getRawBits());
}

bool Fixed::operator >= (const Fixed &rhs) const {
	return (_value >= rhs.getRawBits());
}

bool Fixed::operator <= (const Fixed &rhs) const {
	return (_value <= rhs.getRawBits());
}

bool Fixed::operator == (const Fixed &rhs) const {
	return (_value == rhs.getRawBits());
}

bool Fixed::operator != (const Fixed &rhs) const {
	return (_value != rhs.getRawBits());
}

Fixed Fixed::operator + (const Fixed &rhs) const {
	Fixed ans;
	ans.setRawBits(_value + rhs.getRawBits());
	return (ans);
}

Fixed Fixed::operator - (const Fixed &rhs) const {
	Fixed ans;
	ans.setRawBits(_value - rhs.getRawBits());
	return (ans);
}

Fixed Fixed::operator * (const Fixed &rhs) const {
	Fixed ans(toFloat() * rhs.toFloat());
	return (ans);
}

Fixed Fixed::operator / (const Fixed &rhs) const {
	Fixed ans(toFloat() / rhs.toFloat());
	return (ans);
}

Fixed Fixed::operator++ () {
	Fixed temp;
	temp.setRawBits(++_value);
	return(temp);
}

Fixed Fixed::operator++ (int) {
	Fixed temp;
	temp.setRawBits(_value++);
	return(temp);
}

Fixed Fixed::operator-- () {
	Fixed temp;
	temp.setRawBits(--_value);
	return(temp);
}

Fixed Fixed::operator-- (int) {
	Fixed temp;
	temp.setRawBits(_value--);
	return(temp);
}

Fixed & min (Fixed & a, Fixed & b) {
	return(a < b ? a : b);
}

const Fixed & Fixed::min (const Fixed & a, const Fixed & b) {
	return(a < b ? a : b);
}

Fixed & max (Fixed & a, Fixed & b) {
	return(a > b ? a : b);
}

const Fixed & Fixed::max (const Fixed & a, const Fixed & b) {
	return(a > b ? a : b);
}
