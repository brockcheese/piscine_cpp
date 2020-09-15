#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock () :
	_intern(NULL),
	_signer(NULL),
	_executor(NULL)
{}

OfficeBlock::OfficeBlock(Intern& intern, Bureaucrat& signer, Bureaucrat& executor) {
	_intern= &intern,
	_signer = &signer,
	_executor = &executor;
}

OfficeBlock::~OfficeBlock() {}

void OfficeBlock::setIntern(Intern& intern){
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat& signer){
	_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat& executor){
	_executor = &executor;
}

void OfficeBlock::doBureaucracy(std::string form, std::string target) {
	if (_intern && _signer && _executor) {
		Form* ans = _intern->makeForm(form, target);
		if (!ans)
			throw OfficeBlock::NotAFormException();
		else {
			try {
				_signer->signForm(*ans);
				std::cout << "	targeted on " << target << " (Unsigned)" << std::endl;
			}
			catch(Form::GradeTooLowException & e) {
				throw e;
			}
			try {
				_executor->executeForm(*ans);
					std::cout << "	targeted on " << target << " (";
				if (ans->getIsSigned())
					std::cout << "Signed";
				else
					std::cout << "Unsigned";
				std::cout << ")" << std::endl;
				std::cout << "That'll do, " << target << ". That'll do ..." << std::endl;
			}
			catch(Form::FormNotSignedException & e) {
				throw e;
			}
			catch(Form::GradeTooLowException & e) {
				throw e;
			}
		}
	}
}

OfficeBlock::NotAFormException::NotAFormException() {}

OfficeBlock::NotAFormException::~NotAFormException() throw() {}

OfficeBlock::NotAFormException::NotAFormException(const NotAFormException &g) {
	*this = g;
}

OfficeBlock::NotAFormException & OfficeBlock::NotAFormException::operator= (const NotAFormException &) {
	return (*this);
}
