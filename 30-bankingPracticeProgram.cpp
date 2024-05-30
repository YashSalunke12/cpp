#include<iostream>

double BANK_BALANCE = 0;

void bankBalance() {
    std::cout << "--> Balance: $" << BANK_BALANCE << '\n' << '\n' << '\n';
}

void depositMoney() {
    int amount;
    std::cout << "Enter amount for deposit: " << '\n';
    std::cin>>amount;
    BANK_BALANCE = BANK_BALANCE + amount;
    std::cout << "--> Deposit Succssesfull" << '\n' << "--> Remaining Balance: $" << BANK_BALANCE << '\n' << '\n' << '\n';
}

void withdrawMoney() {
    int amount;
    std::cout << "Enter amount for withdraw: " << '\n';
    std::cin>>amount;
    BANK_BALANCE = BANK_BALANCE - amount;
    std::cout << "--> Withdrawal Succssesfull" << '\n' << "--> Remaining Balance: $" << BANK_BALANCE << '\n' << '\n' << '\n';
}

void bank() {

    std::cout <<  '\n' << '\n' << "Welcome to SBI Bank" << '\n' << '\n';

    std::cout << "****************************************" << '\n';
    std::cout << "check BANK_BALANCE: PRESS 1" << '\n';
    std::cout << "DEPOSIT money: PRESS 2" << '\n';
    std::cout << "WITHDRAW money: PRESS 3" << '\n';
    std::cout << "LOGOUT: PRESS 4" << '\n';
    std::cout << "****************************************" << '\n' << '\n' << '\n';
    int num;
    std::cin>>num;

    switch(num) {
        case 1: 
            bankBalance();
            break;
        case 2:
            depositMoney();
            break;
        case 3:
            withdrawMoney();
            break;
        case 4:
            return;
        default:
            std::cout << "choose from given options";
    }

    std::cout << "MAIN_MENU: PRESS 1" << '\n';
    std::cout << "LOGOUT: PRESS 2" << '\n';
    int num2;
    std::cin>>num2;
    switch(num2) {
        case 1:
            bank();
            break;
        case 2:
            std::cout << '\n' << '\n';
            return;
        default: 
            std::cout << "Choose from given options!";
    }

}

int main(){
    std::string bankingUsername = "YashSalunke";
    std::string bankingPassword = "password123";

    std::string enteredUsername;
    std::string enteredPassword;

    while(true) {
        std::cout << "Enter Username: ";
        std::cin>>enteredUsername;
        std::cout << "Enter Password: ";
        std::cin>>enteredPassword;
        if(enteredUsername != bankingUsername && enteredPassword != bankingPassword) {
            std::cout << "Invalid username or password";
            std::cout << '\n';
        } else {
            break;
        }
    }

    bank();

    std::cout << "Thank you & Visit Again!!";


    return 0;
}