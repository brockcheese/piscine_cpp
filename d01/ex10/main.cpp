#include <iostream>
#include <fstream>
#include <sys/stat.h>

void	output(std::istream &input)
{
	std::cout << input.rdbuf();
}

void	sequence(char **argv, std::ostream filename) {
	std::ofstream output(filename);
	int i = 1;
	while(argv[++i]) {
		std::string arg(argv[i]);
		output << arg << "\n";
	}
}

int		main(int argc, char **argv) {
	if (argc == 1) {
		output(std::cin);
	}
	else {
		for (int i = 1; i < argc; i++) {
			std::string arg(argv[i]);
			if (!arg.compare(">")) {
				sequence(argv, std::string argv[i + 1]);
				return(0);
			}
		}
		for (int i = 1; i < argc; i++) {
			std::string arg(argv[i]);
			if (!arg.compare("-") || !arg.compare("--")) {
				output(std::cin);
			}
			else {
				std::ifstream input(arg);
				if (input) {
					output(input);
				}
				else {
					std::cout << "cat: " << arg << ": No such file or directory";
				}
			}
		}
	}
	return (0);
}
