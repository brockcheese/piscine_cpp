#include "Zombie.hpp"

//zombie constructor

Zombie::Zombie (std::string type, std::string name) :
	_type(type),
	_name(name)
{
	return;
}

//default destructor

Zombie::~Zombie () {
	return;
}

//announce function to declare a zombie

void Zombie::announce() {
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
