#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
	Form();

	public:
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();
				GradeTooHighException(const GradeTooHighException &);
				GradeTooHighException & operator = (const GradeTooHighException &);
				virtual const char* what() const throw() {
					return ("This grade is too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
				GradeTooLowException(const GradeTooLowException &);
				GradeTooLowException & operator = (const GradeTooLowException &);
				virtual const char* what() const throw() {
					return ("This grade is too low");
				}
		};
		class FormNotSignedException : public std::exception {
			public:
				FormNotSignedException();
				virtual ~FormNotSignedException() throw();
				FormNotSignedException(const FormNotSignedException &);
				FormNotSignedException & operator = (const FormNotSignedException &);
				virtual const char* what() const throw() {
					return ("This form is not signed");
				}
		};
		Form(const std::string, const int, const int);
		virtual ~Form();
		Form(const Form &);
		Form & operator = (const Form &);
		const std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat &);
		void execute(Bureaucrat const & executor) const;
		virtual void action() const = 0;
};

std::ostream & operator << (std::ostream & o, const Form &);

#endif
