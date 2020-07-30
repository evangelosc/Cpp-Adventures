#include <iostream>


int main(){
    int number;
    while(true){
        std::cout << "Give an integer: ";
        std::cin >> number;
        std::cout << std::endl;
        number = (number>0 && number%5==0) ? number/5 : -1;
        std::cout << "Result: " << number << std::endl;
    }
    return 0;
}
