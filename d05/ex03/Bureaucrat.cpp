#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(int grade, const std::string name) :
	_name(name)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &b) {
	*this = b;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat &rhs)
{
	if (this != &rhs)
		_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &g) {
	*this = g;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &) {
	return (*this);
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &g) {
	*this = g;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &) {
	return (*this);
}

const std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::increment() {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrement() {
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signForm(Form &f) {
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	catch(Form::GradeTooLowException & e) {
		std::cout << this->getName() << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch(Form::FormNotSignedException & e) {
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
}

std::ostream & operator << (std::ostream & o, const Bureaucrat &b) {
	return o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
}
