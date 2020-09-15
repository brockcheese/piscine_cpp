#include "Victim.hpp"

class Sorcerer {
private:
	std::string _name;
	std::string _title;
	Sorcerer();

public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(const Sorcerer&);
	Sorcerer& operator = (const Sorcerer&);
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &) const;
};

std::ostream & operator << (std::ostream & o, const Sorcerer & s);
