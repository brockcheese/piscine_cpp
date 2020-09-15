#include "Brain.hpp"

class Human {
	Brain _brain{"I need food", 2};

public:
	Human();
	~Human();
	Brain		getBrain();
	std::string identify();
};
