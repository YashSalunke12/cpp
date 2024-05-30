#include<iostream>

int main(){
    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = precide value with new data type (int)    

    int correct = 8;
    int questions = 10;
    int score = correct/(double)questions * 100;
    std::cout << score << "%";

    return 0;
}