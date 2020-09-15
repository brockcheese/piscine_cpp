#ifndef OP_HPP
#define OP_HPP

#include <string>
#include "Token.hpp"

class Op : virtual public Token{
	private:
		char _c;

	public:
		Op();
		Op(char );
		~Op();
		Op(const Op &);
		Op & operator = (const Op &);
		char getC() const ;
};

std::ostream & operator << (std::ostream & o, const Op & t);

#endif
