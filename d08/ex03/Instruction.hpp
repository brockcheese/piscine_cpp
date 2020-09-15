#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP

#include <fstream>
#include <iostream>
#include <queue>

class	Instruction {
	public:
		virtual ~Instruction() {}
		virtual void execute(char**)const = 0;
};

#endif
