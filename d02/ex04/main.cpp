#include <iostream>
#include <string>
#include "Fixed.hpp"

bool	isoinstr(std::string str, std::string o) {
	for(int i = 0; o[i]; i++) {
		for(int j = 0; str[j]; j++) {
			if (o[i] == str[j])
				return (true);
		}
	}
	return (false);
}

Fixed	operation(std::string str) {
	std::string s1;
	char o;
	int start;
	std::string s2;

	int i = -1;
	while (!(isoinstr(str.substr(++i, 1), " +-*/")))
		;
	s1 = str.substr(0, i);
	while (!(isoinstr(str.substr(i, 1), "+-*/")))
		i++;
	o = str[i];
	while (str[++i] == ' ')
		;
	start = i;
	while (str[++i] && isoinstr(str.substr(++i, 1), "0123456789."))
		;
	s2 = str.substr(start, i);
	Fixed a(stof(s1));
	Fixed b(stof(s2));
	if (o == '+')
		return(a + b);
	if (o == '-')
		return(a - b);
	if (o == '*')
		return(a * b);
	if (o == '/')
		return(a / b);
	else return(a);
}

Fixed	eval(std::string str) {
	int count = -1;
	int sub = -1;
	size_t start;

	while (isoinstr(str, "+-*/()")) {
		for(size_t i = 0; str[i]; i++) {
			if (str[i] == '(') {
				count++;
				if (count == 0)
					start = i;
			}
			else if (str[i] == ')') {
				if (count == 0) {
					str.replace(start, (i-start) + 1, std::to_string (eval(str.substr(start + 1, (i-start) - 1)).toFloat()));
					i = start;
				}
				count--;
			}
			if (count == -1) {
				if (sub == -1 && isoinstr(str.substr(i, 1), "0123456789")) {
					start = i;
					sub++ ;
				}
				else if (sub == 0 && isoinstr(str.substr(i, 1), "+-*/")) {
					sub++;
				}
				else if (sub == 1 && ((isoinstr(str.substr(i + 1, 1), "+-*/")) || (i == str.length() - 1))) {
					str.replace(start, (i-start) + 1, std::to_string (operation(str.substr(start, (i-start) + 1)).toFloat()));
					sub = -1;
					i = 0;
				}
			}
		}
	}
	Fixed ans(std::stof(str));
	return (ans);
}

int		main( int argc, char **argv ) {
	if (argc != 2) {
		puts("Error!!!: ");
	}
	else {
		std::cout << eval(argv[1]) << std::endl;
	}
	return (0);
}
