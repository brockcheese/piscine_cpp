#include "Pony.hpp"

static void ponyOnTheHeap() {
	Pony *chonk = new Pony("Chonky Boi", 37, 3);
	delete(chonk);
}

static void ponyOnTheStack() {
	Pony  blackKnight;

	blackKnight.removeLeg();
	blackKnight.removeLeg();
	blackKnight.removeLeg();
	blackKnight.removeLeg();
}

int	main() {
	puts("_____Pony on the Heap Doodleoo Doo Doo_____");
	ponyOnTheHeap();
	puts("_____Pony on the Stack______");
	ponyOnTheStack();
	return (0);
}
