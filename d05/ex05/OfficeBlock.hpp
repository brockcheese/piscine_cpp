#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
	Intern* _intern;
	Bureaucrat* _signer;
	Bureaucrat* _executor;
	public:
		class NotAFormException : public std::exception {
			public:
				NotAFormException();
				virtual ~NotAFormException() throw();
				NotAFormException(const NotAFormException &);
				NotAFormException & operator = (const NotAFormException &);
				virtual const char* what() const throw() {
					return ("This is not a form.");
				}
		};
		OfficeBlock();
		OfficeBlock(Intern&, Bureaucrat&, Bureaucrat&);
		~OfficeBlock();
		void setIntern(Intern&);
		void setSigner(Bureaucrat&);
		void setExecutor(Bureaucrat&);
		void doBureaucracy(std::string form, std::string target);
};

#endif
