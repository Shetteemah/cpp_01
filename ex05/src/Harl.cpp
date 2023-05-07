// Harl.cpp
#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
    void (Harl::*func_ptr)(void) = nullptr;
    if (level == "DEBUG") {
        func_ptr = &Harl::debug;
    }
    else if (level == "INFO") {
        func_ptr = &Harl::info;
    }
    else if (level == "WARNING") {
        func_ptr = &Harl::warning;
    }
    else if (level == "ERROR") {
        func_ptr = &Harl::error;
    }
    else {
        std::cout << "Invalid level: " << level << "\n";
        return;
    }
    (this->*func_ptr)();
}
