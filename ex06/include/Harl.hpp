#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	public:
	    enum LogLevel
		{
	        DEBUG,
	        INFO,
	        WARNING,
	        ERROR
	    };
	
	    Harl();
	    void complainDebug();
	    void complainInfo();
	    void complainWarning();
	    void complainError();
	    LogLevel getLogLevel(std::string level);
	
	private:
	    LogLevel m_logLevel;
};

#endif // HARL_HPP

// #ifndef HARL_HPP
// #define HARL_HPP

// #include <string>

// class Harl {
// public:
//     enum LogLevel
//     {
//         DEBUG,
//         INFO,
//         WARNING,
//         ERROR
//     };

//     Harl();
//     void complainDebug();
//     void complainInfo();
//     void complainWarning();
//     void complainError();
//     LogLevel getLogLevel(std::string level);

// private:
//     LogLevel m_logLevel;
// };

// #endif
