#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << "\nMemory address of the string variable:\t" << &str << std::endl;
    std::cout << "Memory address held by stringPTR:\t" << strPtr << std::endl;
    std::cout << "Memory address held by stringREF:\t" << &strRef << std::endl;

    std::cout << "\n\nValue of the string variable:\t\t" << str << std::endl;
    std::cout << "Value pointed to by stringPTR:\t\t" << *strPtr << std::endl;
    std::cout << "Value pointed to by stringREF:\t\t" << strRef << std::endl;

    return 0;
}
