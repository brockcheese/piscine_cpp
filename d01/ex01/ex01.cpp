#include <iostream>

//fixes a memory leak

void	memoryLeak()
{
	//allocates memory for a string
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl; //prints string
	delete(panthere); //frees memory previously allocated
}
