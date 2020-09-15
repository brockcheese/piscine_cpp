#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "usage: ./sed [filename][find_string][replacement_string]" << std::endl;
		return (0);
	}

	std::ifstream	input(av[1]);
	std::ofstream	output(std::string(av[1]) + ".replace");
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		buffer;
	if (input.fail()) {
		puts("Failed to input. Oops.");
		return (0);
	}
	if (output.fail()) {
		puts("Failed to output. Oops.");
		return (0);
	}
	while (std::getline(input, buffer)) {
		while (buffer.find(s1) != std::string::npos) {
			buffer.replace(buffer.find(s1), s1.length(), s2);
		}
		output << buffer << std::endl;
	}
	input.close();
	output.close();
}
