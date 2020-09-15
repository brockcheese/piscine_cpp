#include <cmath>
#include <random>
#include <string>
#include <iostream>

template< typename T, typename U>
void iter(T *arr, U length, void (*func)(T)){
	for (U i = 0; i < length; i++)
		func(arr[i]);
}

template<typename T>
void	aprint(T elem) {
	std::cout << elem << std::endl;
}

int		main() {
	size_t length = 5;

	int intarr[5];
	float farr[5];
	char carr[5];
	double darr[5];
	std::string sarr[5];
	srand(time(NULL));

	for (size_t i = 0; i < 5; i++) {
		intarr[i] = rand();
		farr[i] = static_cast<float>(rand()) / static_cast<float>(rand());
		darr[i] = static_cast<double>(rand()) / static_cast<double>(rand());
		carr[i] = (rand() % 95) + ' ';
		std::cout << "int: " << intarr[i] << "float: " << farr[i] << "double: " << darr[i] << "character: " << carr[i] << std::endl;
	}
	sarr[0] = "This";
	sarr[1] = "prints";
	sarr[2] = "entirely";
	sarr[3] = "properly";
	sarr[4] = ".";
	iter<int, size_t>(intarr, length, aprint);
	iter(farr, length, aprint);
	iter(darr, length, aprint);
	int i = 5;
	iter(carr, i, aprint);
	iter(sarr, i, aprint);
}
