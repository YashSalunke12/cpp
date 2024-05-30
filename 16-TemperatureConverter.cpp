#include<iostream>
#include<cctype> //for toupper function

int main(){
    double temp;
    char unit;

    std::cout << "Enter temperature: ";
    std::cin>>temp>>unit;

    unit = toupper(unit);

    switch(unit) {
        case 'C':
            std::cout << "Temperature in Fahrenheit is " << (temp * 9/5) + 32;
            break;
        case 'F':
            std::cout << "Temperature in Degree Celcius is " << (temp - 32) * 5/9;
            break;
        default: 
            std::cout << "something went wrong";
    }    
    return 0;
}
