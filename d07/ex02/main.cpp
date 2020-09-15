#include "Array.hpp"

int main () {
	unsigned int i = 5;
	Array<int> d;
	Array<int>a(i);
	a[0] = 5;
	a[1] = 4;
	a[2] = 3;
	a[3] = 2;
	a[4] = 1;
	Array<int>b(a);
	b[0] = 7;
	std::cout << b[0] << b[1] << b[2] << b[3] << b[4] << std::endl;
	a = b;
	std::cout << a[0] << a[1] << a[2] << a[3] << a[4] << std::endl;
	try {
		b[7] = 5;
	}
	catch (Array<int>::OutOfLimitsException & e) {
		std::cout << e.what() << std::endl;
	}
	Array<std::string> g;
	Array<std::string>f(i);
	f[0] = "This ";
	f[1] = "is ";
	f[2] = "a ";
	f[3] = "string ";
	f[4] = "array";
	Array<std::string>h(f);
	h[0] = "I";
	std::cout << h[0] << h[1] << h[2] << h[3] << h[4] << std::endl;
	f = h;
	std::cout << f[0] << f[1] << f[2] << f[3] << f[4] << std::endl;
	try {
		f[7] = "goo";
	}
	catch (Array<std::string>::OutOfLimitsException & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
