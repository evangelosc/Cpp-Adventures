#include <iostream>
#include <vector>
#include <limits>

int main(){
    int len;
    std::vector<int> list;
    std::cout << "Give the length of the list: ";
    std::cin >> len;
    while(len<0){
        std::cout << std::endl;
        std::cout << "That's a nonnegative number. Try again." << std::endl;
        std::cout << "Give the length of the list: ";
        std::cin >> len;
    }
    for (int i=1; i<=len; i++){
        list.push_back(i);
    }
    
    double mean;
    for (int el : list){
        mean += el;
    }
    mean /= (double)len;

    int max = std::numeric_limits<int>::min();
    int min = std::numeric_limits<int>::max();
    for (int el : list){
        if (el < min){
            min = el;
        }
        if (el > max){
            max = el;
        }
    }

    int theRange = max-min;

    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Range: " << theRange << std::endl;

}