#include "easyfind.hpp"

int main () {

int myints[] = { 10, 20, 30, 40 };

std::vector<int> myvector (myints, myints+4);

int it = easyfind(myvector, 30);
std::cout << it << std::endl;

try {
	it = easyfind(myvector, 5);
}
catch(std::exception & e) {
	std::cout << "OOps" << std::endl;
}
}
