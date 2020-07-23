#include <iostream>
#include <vector>


void doNothing(const std::vector<int> &data){}

void thePrint(const std::vector<int> &data){
    for (auto el : data){
        std::cout << el << std::endl;
        doNothing(data);
    }
}

int main(){

    // Multidimensional vectors
    std::vector<std::vector<int>> grades = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (auto el : grades){
        std::cout << "------" << std::endl;
        thePrint(el);
        std::cout << "------" << std::endl;
        for (auto el2 : el){
            std::cout << el2 << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}