#include <string>
#include <iostream>
#include <sstream>

class Brain {
	std::string _thought;
	int			_mass;

public:
	Brain(std::string thought, int mass);
	~Brain();
	std::string identify();
};
