#ifndef INCREMENT_HPP
#define INCREMENT_HPP

#include "Instruction.hpp"

class Increment : virtual public Instruction {
public:
	Increment();
	~Increment();
	Increment(const Increment &);
	Increment & operator = (const Increment &);
	void execute(char **)const;
};

#endif
