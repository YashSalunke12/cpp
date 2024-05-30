#include<iostream>

//pre-define your function
void greet(std::string name);

int main(){
    std::string name;
    std::cin>>name;
    greet(name);
    return 0;
}

void greet(std::string name) { 
    std::cout << "Good Morning, " << name;
}