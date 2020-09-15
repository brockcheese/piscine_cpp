#include "Form.hpp"

Form::Form() :
	_gradeToSign(1),
	_gradeToExecute(1)
{}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) :
	_name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	if(gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &b) :
	_gradeToSign(b.getGradeToSign()),
	_gradeToExecute(b.getGradeToExecute())
{
	*this = b;
}

Form & Form::operator= (const Form &rhs)
{
	if (this != &rhs) {
		_isSigned = rhs.getIsSigned();
	}
	return (*this);
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &g) {
	*this = g;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator= (const GradeTooHighException &) {
	return (*this);
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &g) {
	*this = g;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator= (const GradeTooLowException &) {
	return (*this);
}

Form::FormNotSignedException::FormNotSignedException() {}

Form::FormNotSignedException::~FormNotSignedException() throw() {}

Form::FormNotSignedException::FormNotSignedException(const FormNotSignedException &f) {
	*this = f;
}

Form::FormNotSignedException & Form::FormNotSignedException::operator= (const FormNotSignedException &) {
	return (*this);
}

const std::string Form::getName() const {
	return _name;
}

bool Form::getIsSigned() const {
	return _isSigned;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= getGradeToSign())
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const {
	if (_isSigned != true)
		throw Form::FormNotSignedException();
	else {
		if (executor.getGrade() <= getGradeToExecute()) {
			action();
		}
		else {
			throw Form::GradeTooLowException();
		}
	}
}

std::ostream & operator << (std::ostream & o, const Form &b) {
	return o << b.getName() << " (s.grade " << b.getGradeToSign() << ", ex.grade " << b.getGradeToExecute() << ")";
}
