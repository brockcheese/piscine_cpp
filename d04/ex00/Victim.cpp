#include "Victim.hpp"

Victim::Victim (std::string name ) :
	_name(name)
{
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim () {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim () {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(const Victim & v) {
	*this = v;
}

Victim & Victim::operator= (const Victim &rhs) {
	if (this != &rhs) {
		_name = rhs.getName();
	}
	return (*this);
}

std::string Victim::getName() const{
	return (_name);
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator << (std::ostream & o, const Victim &v) {
	return o << "I'm " << v.getName() << " and I like otters !" << std::endl;
}
