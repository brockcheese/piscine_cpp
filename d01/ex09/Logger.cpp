#include "Logger.hpp"

Logger::Logger(std::string logger) :
	_logger(logger)
{
	return;
}

Logger::~Logger() {
	return;
}

std::string		Logger::makeLogEntry(std::string input) {
	std::string timestamp;
	time_t rawtime;

	time (&rawtime);
	timestamp = std::string(ctime(&rawtime));
	timestamp.erase(timestamp.length() - 1, 1);

	return ("[" + timestamp + "] : " + input);
}

void	Logger::logToConsole(std::string input) {
	std::cout << makeLogEntry(input) << std::endl;
}

void	Logger::logToFile(std::string input) {
	std::ofstream output(_logger);
	output << makeLogEntry(input) << "\n";
}

void	Logger::log(std::string const & dest, std::string const & message) {
	dispatch	logs[2] = {
		{"console", &Logger::logToConsole},
		{"file", &Logger::logToFile}
	};

	for (int i = 0; i < 2; i++) {
		if (!dest.compare(logs[i].dest))
			(this->*logs[i].func)(message);
	}
}
