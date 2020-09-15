#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main ()
{
	Intern		idiotOne;
	Bureaucrat	hermes = Bureaucrat(37, "Hermes Conrad");
	Bureaucrat	bob = Bureaucrat(123, "Bobby Bobson");
	OfficeBlock ob;

	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);

	try{
		ob.doBureaucracy("shrubbery creation", "Pigley");
	}
	catch (OfficeBlock::NotAFormException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::FormNotSignedException & e) {
		std::cout << e.what() << std::endl;
	}
}
