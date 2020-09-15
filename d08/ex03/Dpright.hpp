#ifndef DPRIGHT_HPP
#define DPRIGHT_HPP

#include "Instruction.hpp"

class Dpright : virtual public Instruction {
public:
	Dpright();
	~Dpright();
	Dpright(const Dpright &);
	Dpright & operator = (const Dpright &);
	void execute(char**)const;
};

#endif
