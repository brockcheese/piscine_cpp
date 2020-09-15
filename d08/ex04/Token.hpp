#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
#include <iostream>
#include <exception>

class Token {
	protected:
		std::string _identity;
	public:
		Token();
		Token(std::string identify);
		virtual ~Token();
		Token(const Token &);
		Token & operator = (const Token &);
		std::string getIdentity () const ;
};

std::ostream & operator << (std::ostream & o, const Token & t);

#endif
