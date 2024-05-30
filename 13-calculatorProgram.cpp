#include<iostream>

int main(){
    double num1, num2;
    std::cout << "Enter first number: ";
    std::cin>>num1;
    std::cout << "Enter second number: ";
    std::cin>>num2;
    char optr;
    std::cout << "Enter operation: ";
    std::cin>>optr;

    switch(optr) {
        case '+': 
            std::cout << num1 << " " << optr << " " << num2 << " = " << num1+num2;
            break;
        case '-': 
            std::cout << num1 << " " << optr << " " << num2 << " = " << num1-num2;
            break;
        case '*': 
            std::cout << num1 << " " << optr << " " << num2 << " = " << num1*num2;
            break;
        case '/': 
            std::cout << num1 << " " << optr << " " << num2 << " = " << num1/num2;
            break;
        default:
            std::cout << "Enter a valid number";
    }

    return 0;
}