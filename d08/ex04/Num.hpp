#ifndef NUM_HPP
#define NUM_HPP

#include <string>
#include "Token.hpp"

class Num : virtual public Token{
	private:
		int _n;

	public:
		Num();
		Num(int);
		~Num();
		Num(const Num &);
		Num & operator = (const Num &);
		int getNum() const ;
};

std::ostream & operator << (std::ostream & o, const Num & t);

#endif
