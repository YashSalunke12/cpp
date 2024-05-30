#include<iostream>

//overloaded functions means you can have multiple fuctions with same name but different parameters

void bakePizza() {
    std::cout << "pizza";
}

void bakePizza(std::string toppings) {
    std::cout << toppings << " pizza";
}

int main(){
    bakePizza();
    bakePizza("cheese");
    return 0;
}