#include "Intern.hpp"

Intern::Intern () {}

Intern::~Intern () {}

Intern::Intern (const Intern &i) {
	*this = i;
}

Intern & Intern::operator = (const Intern &) {
	return (*this);
}

Form * Intern::makeForm(std::string name, std::string target) {
	Form* ans = NULL;
	if (! (name.compare("robotomy request"))) {
		ans = new RobotomyRequestForm(target);
	}
	else if (!(name.compare("presidential pardon"))) {
		ans = new PresidentialPardonForm(target);
	}
	else if (!(name.compare("shrubbery creation"))) {
		ans = new ShrubberyCreationForm(target);
	}
	if (ans != NULL) {
		std::cout << "Intern creates a " << *ans << " targeted on " << target << " (";
		if(ans->getIsSigned())
			std::cout << "Signed";
		else
			std::cout << "Unsigned";
		std::cout << ")" << std::endl;
	}
	return (ans);
}
