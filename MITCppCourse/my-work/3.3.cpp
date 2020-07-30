#include <iostream>
#include <vector>

int main(){
    int number;
    std::cout << "Give the desired number of primes: ";
    std::cin >> number;
    while(number<0){
        std::cout << std::endl;
        std::cout << "That's a negative number. Try again." << std::endl;
        std::cout << "Give the desired number of primes: ";
        std::cin >> number;
    }
    std::cout << std::endl;
    std::vector<int> primes;
    for(int i=1; i<=number; i++){
        if (number%i!=0){
            primes.push_back(i);
        }
    }
    for (int el : primes){
        std::cout << el << std::endl;
    }
    return 0;
}