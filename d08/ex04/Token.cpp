#include "Token.hpp"


Token::Token() {}

Token::Token(std::string identity) :
	_identity(identity)
{}

Token::~Token() {}

Token::Token(const Token &t) :
	_identity(t.getIdentity())
{
	*this = t;
}

Token & Token::operator= (const Token &rhs) {
	if (this != &rhs) {
		_identity = rhs._identity;
	}
	return (*this);
}

std::string Token::getIdentity() const {
	return _identity;
}

std::ostream & operator << (std::ostream & o, const Token & f) {
	return o << f.getIdentity();
}
