#include<iostream>

//cout << (insertion operator)
//cin >> (extraction operator)

int main(){

    int age;
    std::cout << "What's your age?" << '\n';
    std::cin >> age;
    std::cout << "Your age is " << age << '\n';

    std::string name;
    std::cout << "What's your name?" << '\n';
    // std::cin >> name;
    //to get string with spaces
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << '\n';

    return 0;
}