#include "../include/Harl.hpp"


Harl::Harl()
{
	m_logLevel = LogLevel::INFO;
}

void Harl::complainDebug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
	std::cout << "It's like they say, you can never have too much of a good thing!\n";
}

void Harl::complainInfo()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	std::cout << "Why can't restaurants understand that bacon is the most important ingredient in a burger?\n";
}

void Harl::complainWarning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
	std::cout << "I'm just saying, loyalty should count for something!\n";
}

void Harl::complainError()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << "I won't stand for this kind of treatment!\n";
}

Harl::LogLevel Harl::getLogLevel(std::string level)
{
	if (level == "DEBUG")
		return LogLevel::DEBUG;
	else if (level == "INFO")
		return LogLevel::INFO;
	else if (level == "WARNING")
		return LogLevel::WARNING;
    else if (level == "ERROR")
        return LogLevel::ERROR;
    // Add an else clause to handle an invalid log level
    else
        return LogLevel::WARNING;
}