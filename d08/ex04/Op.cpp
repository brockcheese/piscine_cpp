#include "Op.hpp"


Op::Op() {}

Op::Op(char c) : Token("Op"),
	_c(c)
{}

Op::~Op() {}

Op::Op(const Op &Op) : Token(Op),
	_c(Op._c)
{
	*this = Op;
}

Op & Op::operator= (const Op &rhs) {
	if (this != &rhs) {
		_identity = rhs._identity;
		_c = rhs._c;
	}
	return (*this);
}

char Op::getC() const {
	return _c;
}

std::ostream & operator << (std::ostream & o, const Op & op) {
	return o << op.getIdentity() << "(" << op.getC() << ")";
}
