#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
	int _grade;
	const std::string _name;
	Bureaucrat();

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
		Bureaucrat(int, const std::string);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &);
		Bureaucrat & operator = (const Bureaucrat &);
		const std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		void signForm(Form &);
};

std::ostream & operator << (std::ostream & o, const Bureaucrat &);

#endif
