#include "ex00.hpp"

void valtochar(double val) {
	std::cout << "char: ";
	if (std::isnan(val))
		puts("impossible");
	else if (val < ' ' || val > '~')
		puts("Non displayable");
	else
		std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
}

void valtoint(double val) {
	std::cout << "int: ";
	if (std::isnan(val) || val > INT_MAX || val < INT_MIN)
		puts("impossible");
	else
		std::cout << static_cast<int>(val) << std::endl;
}

void valtofloat(double val) {
	std::cout << "float: ";
	if (std::isnan(val))
		puts("nanf");
	else {
		float f = static_cast<float>(val);
		std::cout << f;
		if (!std::fmod(f, static_cast<int>(f)) || f == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void valtodouble(double val) {
	std::cout << "double: ";
	if (std::isnan(val))
		puts("nan");
	else {
		std::cout << val;
		if (!std::fmod(val, static_cast<int>(val)) || val == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
}

int	checkconversions(std::string val) {
	try {
		std::stod(val);
	}
	catch(std::exception & e) {
		return (0);
	}
	return (1);
}

void convert (std::string val) {
	double d;
	if (val.length() == 1 && (val[0] < '0' || val[0] > '9')) {
		d = static_cast<double>(val[0]);
	}
	else if (!(checkconversions(val))) {
		puts("Please put a literal value.");
		return;
	}
	else
		d = std::stod(val);
	valtochar(d);
	valtoint(d);
	valtofloat(d);
	valtodouble(d);
}

int main (int argc, char **argv){

	if (argc == 2) {
		std::string val(argv[1]);
		if (val.length() > 1 && val.compare("nan") && val.compare("nanf") && val[0] != '-' && val[0] != '+' && (val[0] < '0' || val[0] > '9'))
			puts("Please put a literal value.");
		else
			convert(val);
	}
	else {
		puts("usage: ./convert [literal value]");
	}
	return (0);
}
