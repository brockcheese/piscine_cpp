#include "Logger.hpp"

int		main(int ac, char **av) {
	if (ac != 3) {
		std::cout << "Usage: " << "./loggs destination(\'console\' or \'file\')"
			<< "message filename"
			<< std::endl;
		return (0);
	}
	Logger l("milk");
	l.log(av[1], av[2]);
	return (1);
}
