#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45),
	_target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &p) : Form("Robotomy Request Form", 72, 45){
	*this = p;
}

RobotomyRequestForm & RobotomyRequestForm::operator= (const RobotomyRequestForm &rhs) {
	if (this != &rhs) {
		_target = rhs._target;
	}
	return (*this);
}

void RobotomyRequestForm::action() const {
	srand(time(NULL));
    int ans = rand() % 2;
	if (ans == 1)
		std::cout << "*beep boop beep* " << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "it's a failrue." << std::endl;
}
