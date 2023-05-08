#include "../include/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
    std::cout << "\nDEBUG:\nI noticed that the memory usage has increased significantly after running the application for a few hours. We need to investigate this further.\n";
}

void Harl::info()
{
    std::cout << "INFO:\nThe server has been running smoothly for the past 24 hours with an average CPU usage of 30%. Keep monitoring to ensure it stays stable.\n";
}

void Harl::warning()
{
    std::cout << "\nWARNING:\nThe disk space is running low on the server. We need to clear some space before it affects system performance.\n";
}

void Harl::error()
{
    std::cout << "\nERROR:\nThe server is down and cannot be reached. Please investigate and resolve the issue immediately.\n";
}

void Harl::complain(std::string level)
{
    void (Harl::*func_ptr)(void) = nullptr;
    if (level == "DEBUG")
    {
        func_ptr = &Harl::debug;
    }
    else if (level == "INFO")
    {
        func_ptr = &Harl::info;
    }
    else if (level == "WARNING")
    {
        func_ptr = &Harl::warning;
    }
    else if (level == "ERROR")
    {
        func_ptr = &Harl::error;
    }
    else {
        std::cout << "Invalid level: " << level << "\nPlease use any of these levels:\nDEBUG\nINFO\nWARNING\nERROR" <<"\n";
        return;
    }
    (this->*func_ptr)();
}
