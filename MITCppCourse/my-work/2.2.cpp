#include <iostream>

int main(){
    int number;
    std::cout << "Nonnegative interger: ";
    std::cin >> number;
    while(number<0){
        std::cout << std::endl;
        std::cout << "That's a negative number try again." << std::endl;
        std::cout << "Nonnegative interger: ";
        std::cin >> number;
    }
    while(--number>=0){
        std::cout << "Hello, World!" << std::endl;
    }
}