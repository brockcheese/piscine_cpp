#ifndef COMMA_HPP
#define COMMA_HPP

#include "Instruction.hpp"

class Comma : virtual public Instruction {
public:
	Comma();
	~Comma();
	Comma(const Comma &);
	Comma & operator = (const Comma &);
	void execute(char **)const ;
};

#endif
