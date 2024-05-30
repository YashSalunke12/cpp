#include<iostream>

int main(){
    int marks;
    std::cout << "Enter your marks: ";
    std::cin>>marks;
    marks >= 75 ? std::cout << "Distinction" : std::cout <<"Avarage";    
    return 0;
}