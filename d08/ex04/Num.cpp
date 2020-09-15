#include "Num.hpp"


Num::Num() {}

Num::Num(int n) : Token("Num"),
	_n(n)
{}

Num::~Num() {}

Num::Num(const Num &num) : Token(num),
	_n(num._n)
{
	*this = num;
}

Num & Num::operator= (const Num &rhs) {
	if (this != &rhs) {
		_identity = rhs._identity;
		_n = rhs._n;
	}
	return (*this);
}

int Num::getNum() const {
	return _n;
}

std::ostream & operator << (std::ostream & o, const Num & n) {
	return o << n.getIdentity() << "(" << n.getNum() << ")";
}
