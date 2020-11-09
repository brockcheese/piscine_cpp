#include "Human.hpp"

//creates an instance of a human and has it identify itself

int main()
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
