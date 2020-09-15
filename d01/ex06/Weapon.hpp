#include <string>
#include <iostream>

class Weapon {
	std::string _type;

public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	std::string getType();
	void setType(std::string);
};
