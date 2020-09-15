#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name){
	_name = name;
	puts("Zog zog.");
}

Peon::Peon() {
	puts("Zog zog.");
}

Peon::~Peon() {
	puts("Bleuark...");
}

Peon::Peon(const Peon & p) {
	*this = p;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

Peon & Peon::operator= (const Peon &rhs) {
	if (this != &rhs) {
		_name = rhs.getName();
	}
	return (*this);
}
