#include <string>
#include <iostream>

//program in which a string is created along with a pointer and reference to it

int	main() {
	std::string s = "HI THIS IS BRAIN"; //creates string
	std::string* p = &s; //creates pointer to string
	std::string& r = s; //creates reference to string

	//prints pointer and reference to string
	std::cout << *p << std::endl << r << std::endl;
}
