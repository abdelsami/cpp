#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* strPtr = &str;
    std::string& strRef = str;

    std::cout << "\nMemory address of string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << strPtr << std::endl;
    std::cout << "Memory address held by stringREF: " << &strRef << std::endl;

    std::cout << "\nValue of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *strPtr << std::endl;
    std::cout << "Value pointed to by stringREF: " << strRef << std::endl;

    return 0;
}