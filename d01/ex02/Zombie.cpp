#include "Zombie.hpp"

Zombie::Zombie (std::string type, std::string name) :
	_type(type),
	_name(name)
{
	return;
}

Zombie::~Zombie () {
	return;
}

void Zombie::announce() {
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
