#include<iostream>

int main(){
    int age;
    std::cin>>age;
    if(age>=18) {
        std::cout << "Congratulations you are an adult!!";
    } else {
        std::cout << "You are not an adult";
    }
    return 0;
}