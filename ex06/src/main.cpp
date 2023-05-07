#include "../include/Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: harlFilter [log_level]\n";
		std::cout << "Log levels: DEBUG, INFO, WARNING, ERROR\n";
		return 1;
	}

	Harl harl;

	// Parse log level from input
	std::string log_level(argv[1]);

	// Call appropriate complain method based on log level
	switch (harl.getLogLevel(log_level))
	{
		case Harl::LogLevel::DEBUG:
			harl.complainDebug();
		case Harl::LogLevel::INFO:
			harl.complainInfo();
		case Harl::LogLevel::WARNING:
			harl.complainWarning();
		case Harl::LogLevel::ERROR:
			harl.complainError();
			break;
		default:
			std::cout << "Invalid log level: " << log_level << "\n";
			std::cout << "Log levels: DEBUG, INFO, WARNING, ERROR\n";
			break;
	}

	return 0;
}
