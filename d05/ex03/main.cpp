#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main () {
	try {
		Bureaucrat b(170, "Brock");
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b(-1, "Brock");
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b(130,"Brock");
	std::cout << b << std::endl;
	try {
		b.decrement();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	b.increment();
	std::cout << b << std::endl;

	Intern someRandomIntern;
	Form* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "Home");
	b.signForm(*scf);
	b.executeForm(*scf);
	delete scf;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Pinocchio");
	Bureaucrat c(26, "Gepetto");
	c.signForm(*rrf);
	c.executeForm(*rrf);
	delete rrf;
	Form* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "You, the reader");
	c.signForm(*ppf);
	c.increment();
	c.signForm(*ppf);
	c.executeForm(*ppf);
	Bureaucrat d(1, "Some Guy");
	d.executeForm(*ppf);
	delete ppf;
}
