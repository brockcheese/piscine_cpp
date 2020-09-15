#include <cmath>

class	Fixed {
	int	_value;
	static const int _fractional = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed & a);
	Fixed & operator = (const Fixed & );
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed(const int n);
	Fixed(const float n);
	float toFloat( void ) const;
	int		toInt( void ) const;

	bool operator > (const Fixed & ) const;
	bool operator < (const Fixed & ) const;
	bool operator >= (const Fixed & ) const;
	bool operator <= (const Fixed & ) const;
	bool operator == (const Fixed & ) const;
	bool operator != (const Fixed & ) const;
	Fixed operator + (const Fixed & ) const;
	Fixed operator - (const Fixed & ) const;
	Fixed operator * (const Fixed & ) const;
	Fixed operator / (const Fixed & ) const;
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	static const Fixed & min(const Fixed &, const Fixed &);
	static const Fixed & max(const Fixed &, const Fixed &);
};

std::ostream & operator << (std::ostream & o, const Fixed & f);
Fixed & min(Fixed &, Fixed &);
Fixed & max(Fixed &, Fixed &);

