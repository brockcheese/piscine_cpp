#include <string>
#include <iomanip>
#include <iostream>

class Pony {
	std::string	_name;
	int			_age;
	int			_nblegs;

public:
	Pony();
	Pony(std::string name, int age, int nblegs);
	~Pony();
	void removeLeg();
	std::string getName();
	int getAge();
	int getnbLegs();
};
