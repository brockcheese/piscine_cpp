#ifndef DECREMENT_HPP
#define DECREMENT_HPP

#include "Instruction.hpp"

class Decrement : virtual public Instruction {
public:
	Decrement();
	~Decrement();
	Decrement(const Decrement &);
	Decrement & operator = (const Decrement &);
	void execute(char **)const;
};

#endif
