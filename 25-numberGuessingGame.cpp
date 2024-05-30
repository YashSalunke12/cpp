#include<iostream>

int main(){
    srand(time(NULL));
    int originalNumber = (rand() % 100) + 1;
    int userNumber;
    int chance = 10;
    while (chance--){
        std::cout << "Enter a number between 1-100: ";
        std::cin>>userNumber;
        int score = (100 * chance) / 10;
        if(originalNumber == userNumber) {
            std::cout << "congratulations! You are a winner!" << std::endl << "Your Score is " << score;
            break;
        } else if(chance < 1) {
            std::cout << "Game Over!!!" << '\n' << "Better luck next time!!" << '\n' << "The original number is: " << originalNumber;
        } else if(userNumber>originalNumber) {
            std::cout<< "The original number is smaller!" << '\n';
            std::cout<< "Chances left: " << chance << '\n';
        } else if(userNumber<originalNumber) {
            std::cout<< "The original number is greater!" << '\n';
            std::cout<< "Chances left: " << chance << '\n';
        }

    }
    
    return 0;
}