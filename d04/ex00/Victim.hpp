#include <string>
#include <iostream>

class Victim {
protected:
	std::string _name;
	Victim();

public:
	Victim(std::string name);
	~Victim();
	Victim(const Victim &);
	Victim & operator = (const Victim &rhs);
	std::string getName() const;
	virtual void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &, const Victim &);
