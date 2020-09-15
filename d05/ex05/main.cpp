#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

int main ()
{
	CentralBureaucracy cb;
	Bureaucrat	hermes = Bureaucrat(3, "Hermes Conrad");
	Bureaucrat	bob = Bureaucrat(3, "Bobby Bobson");
	Bureaucrat	bill = Bureaucrat(3, "Billiam");
	Bureaucrat	brad = Bureaucrat(3, "Brad Pitt");
	Bureaucrat	paul = Bureaucrat(3, "Steve");
	Bureaucrat	matt = Bureaucrat(3, "Steve");
	Bureaucrat	jared = Bureaucrat(3, "Steve");
	Bureaucrat	jake = Bureaucrat(3, "Steve");
	Bureaucrat	slimon = Bureaucrat(3, "Steve");
	Bureaucrat	phil = Bureaucrat(3, "Steve");
	Bureaucrat	bobby = Bureaucrat(3, "Steve");
	Bureaucrat	james = Bureaucrat(3, "Steve");
	Bureaucrat	sean = Bureaucrat(3, "Steve");
	Bureaucrat	shawn = Bureaucrat(3, "Steve");
	Bureaucrat	sheawon = Bureaucrat(3, "Steve");
	Bureaucrat	grape = Bureaucrat(3, "Steve");
	Bureaucrat	lemon = Bureaucrat(3, "Steve");
	Bureaucrat	apricot = Bureaucrat(3, "Steve");
	Bureaucrat	melon = Bureaucrat(3, "Steve");
	Bureaucrat	anthony = Bureaucrat(3, "Steve");

	cb.feedBureaucrat(hermes);
	cb.feedBureaucrat(bob);
	cb.feedBureaucrat(bill);
	cb.feedBureaucrat(brad);
	cb.feedBureaucrat(paul);
	cb.feedBureaucrat(matt);
	cb.feedBureaucrat(jared);
	cb.feedBureaucrat(jake);
	cb.feedBureaucrat(slimon);
	cb.feedBureaucrat(phil);
	cb.feedBureaucrat(bobby);
	cb.feedBureaucrat(james);
	cb.feedBureaucrat(sean);
	cb.feedBureaucrat(shawn);
	cb.feedBureaucrat(sheawon);
	cb.feedBureaucrat(grape);
	cb.feedBureaucrat(lemon);
	cb.feedBureaucrat(apricot);
	cb.feedBureaucrat(melon);
	cb.feedBureaucrat(anthony);
	cb.queueUp("Brock");
	cb.queueUp("The White House");
	cb.doBureaucracy();
}
