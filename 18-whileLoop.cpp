#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name";
    getline(std::cin, name);
    while (name.empty()) {
        std::cout << "Enter your name";
        getline(std::cin, name);
    }
    return 0;
}