#include<iostream>

int main(){
    std::string name;
    getline(std::cin, name);
    std::cout << "length: " << name.length();    
    if(name.empty()) {
        std::cout << "You didn't entered your name";
    }
    return 0;
}