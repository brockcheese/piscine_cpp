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
};
