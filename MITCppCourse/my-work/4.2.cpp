#include <iostream>

using namespace std;

int main(){
    long long number;
    cout << "Enter a number: ";
    cin >> number;
    if (number<0){
        std::cout << std::endl;
        std::cout << "That's a negative number." << std::endl;
    } else{
        cout << "The factorial of " << number << " is ";
        int accumulator=1;
        for(;number>0;accumulator*=number --);
        cout << accumulator<< ".\n";
    }
    return 0;
}