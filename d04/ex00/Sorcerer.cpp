#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) :
	_name(name),
	_title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer() {
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &s) {
	*this = s;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &rhs) {
	if (this != &rhs) {
		_name = rhs.getName();
		_title = rhs.getTitle();
	}
	return (*this);
}

std::string Sorcerer::getName() const {
	return _name;
}

std::string Sorcerer::getTitle() const {
	return _title;
}

void Sorcerer::polymorph(Victim const &v) const {
	v.getPolymorphed();
}

std::ostream & operator << (std::ostream & o, const Sorcerer & s) {
	return o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies !" << std::endl;
}
