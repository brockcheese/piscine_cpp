#include "Form.hpp"
#include "Bureaucrat.hpp"

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
	Bureaucrat b(150,"Brock");
	std::cout << b << std::endl;
	try {
		b.decrement();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	b.increment();
	std::cout << b << std::endl;

	try {
		Form f("Form A", 157, 3);
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	Form f("Form A", 4, 3);
	std::cout << f << std::endl;
	b.signForm(f);
	Form f0("Form B", 149, 3);
	std::cout << f0 << std::endl;
	b.signForm(f0);
	std::cout << f0 << std::endl;
	return 0;
}
