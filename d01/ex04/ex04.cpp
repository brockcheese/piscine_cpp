#include <string>
#include <iostream>

int	main() {
	std::string s = "HI THIS IS BRAIN";
	std::string* p = &s;
	std::string& r = s;

	std::cout << *p << std::endl << r << std::endl;
}
