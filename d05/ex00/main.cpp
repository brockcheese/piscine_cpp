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
	return 0;
}
