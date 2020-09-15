#include <string>
#include <iostream>
#include <fstream>

class Logger {
	std::string _logger;
	void logToConsole(std::string input);
	void logToFile(std::string input);
	std::string makeLogEntry (std::string input);

public:
	Logger(std::string logger);
	~Logger();
	void log(std::string const & dest, std::string const & message);
};

struct dispatch {
	std::string dest;
	void	(Logger::*func)(std::string input);
};
