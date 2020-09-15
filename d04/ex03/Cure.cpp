#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &i) : AMateria(i){}

Cure & Cure::operator= (const Cure & rhs) {
	if (this != &rhs) {
		xp_ = rhs.getXP();
	}
	return (*this);
}

AMateria* Cure::clone() const {
	AMateria	*clone = new Cure();
	return (clone);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


