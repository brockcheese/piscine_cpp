#include "Human.hpp"

Human::Human () {
	return;
}

Human::~Human() {
	return;
}

Brain		Human::getBrain() {
	return(_brain);
}

std::string Human::identify() {
	return(_brain.identify());
}
