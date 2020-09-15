#include <iostream>
#include <string>

class Zombie {
	std::string _type;
	std::string _name;

public:
	Zombie(std::string type, std::string name);
	Zombie();
	~Zombie();
	void setType(std::string type);
	void setName(std::string name);
	void announce();
};
