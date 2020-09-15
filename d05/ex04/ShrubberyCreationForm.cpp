#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p) : Form("Shrubbery Creation Form", 145, 137){
	*this = p;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= (const ShrubberyCreationForm &rhs) {
	if (this != &rhs) {
		_target = rhs._target;
	}
	return (*this);
}

void ShrubberyCreationForm::action() const {
	std::ofstream output(_target + "_shrubbery");
	output << "." << "\n"
	<< "├ Bureaucrat.cpp" << "\n"
	<< "├ Bureaucrat.hpp" << "\n"
	<< "├ Form.cpp" << "\n"
	<< "├ Form.hpp" << "\n"
	<< "├ main.cpp" << "\n"
	<< "├ Makefile" << "\n"
	<< "├ PresidentialPardonForm.cpp" << "\n"
	<< "├ PresidentialPardonForm.hpp" << "\n"
	<< "├ RobotomyRequestForm.cpp" << "\n"
	<< "├ RobotomyRequestForm.hpp" << "\n"
	<< "├ ShrubberyCreationForm.cpp" << "\n"
	<< "├ ShrubberyCreationForm.hpp" << "\n"
	<< "├ " << _target << "_shrubbery" << std::endl;
}
