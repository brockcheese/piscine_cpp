#include "serialize.hpp"

int main() {
	void* s = serialize();
	char* c = reinterpret_cast<char *>(s);
	for(int i = 0; i < 8; i++)
		std::cout << c[i];
	for(int i = 0; i < 8; i++)
		std::cout << c[i + 12];
	puts("");
	int* ci = reinterpret_cast<int *>(s);
	std::cout << ci[2] << std::endl;
	Data* d = deserialize(s);
	std::cout << d->s1 << d->s2 << std::endl << d->n << std::endl;
	delete c;
	delete d;
	return 0;
}
