#include<iostream>

int main(){
    //&& -> check if both conditions are true
    // int temp;
    // std::cin>>temp;
    // temp > 0 && temp < 30 ? std::cout << "good" : std::cout << "bad";

    //|| -> check if one condition is true out of 2
    int temp;
    std::cin>>temp;
    temp < 20 || temp > 40 ? std::cout << "ok" : std::cout << "not ok";    
    return 0;
}