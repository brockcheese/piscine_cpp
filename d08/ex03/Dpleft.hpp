#ifndef DPLEFT_HPP
#define DPLEFT_HPP

#include "Instruction.hpp"

class Dpleft : virtual public Instruction {
public:
	Dpleft();
	~Dpleft();
	Dpleft(const Dpleft &);
	Dpleft & operator = (const Dpleft &);
	void execute(char **)const;
};

#endif
