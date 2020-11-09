#include "Pony.hpp"

//creates a pony on the heap

static void ponyOnTheHeap() {
	//allocates chonk to store a new pony on the heap
	Pony *chonk = new Pony("Chonky Boi", 37, 3);
	delete(chonk); //frees memory allocates by chonk
}

//creates a pony on the stack

static void ponyOnTheStack() {
	Pony  blackKnight; //allocates pony on the stack

	blackKnight.removeLeg(); //remove ponie's leg
	blackKnight.removeLeg();
	blackKnight.removeLeg();
	blackKnight.removeLeg();
}

//demonstrates allocating memory on a heap vs on a stack

int	main() {
	puts("_____Pony on the Heap Doodleoo Doo Doo_____");
	ponyOnTheHeap(); //creates a pony on the heap
	puts("_____Pony on the Stack______");
	ponyOnTheStack(); //creates a pony on the stack
	return (0); //ends program
}
