#include<iostream>

int main(){
    //arithmetic operator -> returns the result of a specific 
    //                         arithmetic operation (+, /, *, -)

    int students = 20;
    students = students + 1;
    //students+=1;

    //preffered
    students++;
    std::cout << students;
    
    return 0;
}