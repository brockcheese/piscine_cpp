#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5),
	_target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : Form("Presidential Pardon Form", 25, 5){
	*this = p;
}

PresidentialPardonForm & PresidentialPardonForm::operator= (const PresidentialPardonForm &rhs) {
	if (this != &rhs) {
		_target = rhs._target;
	}
	return (*this);
}

void PresidentialPardonForm::action() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
