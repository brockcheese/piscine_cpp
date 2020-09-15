#include "Zombie.hpp"

Zombie::Zombie (std::string type, std::string name) :
	_type(type),
	_name(name)
{
	return;
}

Zombie::Zombie () {
	return;
}

Zombie::~Zombie () {
	return;
}

void Zombie::setName (std::string name) {
	_name = name;
}

void Zombie::setType (std::string type) {
	_type = type;
}

void Zombie::announce() {
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
