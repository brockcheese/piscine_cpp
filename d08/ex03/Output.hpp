#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include "Instruction.hpp"

class Output : virtual public Instruction {
public:
	Output();
	~Output();
	Output(const Output &);
	Output & operator = (const Output &);
	void execute(char **)const;
};

#endif
