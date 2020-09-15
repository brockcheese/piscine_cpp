#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) :
	_type(type),
	xp_(0)
{}

AMateria::AMateria() :
	xp_(0)
{}

AMateria::~AMateria () {}

AMateria::AMateria(const AMateria &a){
	*this = a;
}

AMateria & AMateria::operator= (const AMateria &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
		xp_ = rhs.xp_;
	}
	return (*this);
}

std::string const & AMateria::getType() const {
	return _type;
}

unsigned int AMateria::getXP() const {
	return xp_;
}

void	AMateria::use(ICharacter & target) {
	(void)target;
	xp_ += 10;
}
