#include <iostream>
#include <vector>
#include <array>

// int square(int* &number){
//     return (*number) * (*number);
// }

// int countOcc(char* p, char x){
//     if (p==nullptr) return 0;
//     int count = 0;
//     for (; p!=nullptr; ++p){
//         if (*p == x){
//             ++count;
//         }
//     }
//     return count;
// }

void thePrint(std::vector<int> &data){
    data.push_back(12);
    for (int i=0; i<data.size(); i++){
        std::cout << data[i] << std::endl;
    }
}

void printArray(std::array<int, 4> &aData){
    // aData.push_back(10);
    for (int i=0; i<aData.size(); i++){
        std::cout << aData[i] << std::endl;
    }
}

int main(){
    // int v[6] = {0,1,2,3,4,5};
    // int* p = &v[0];

    // std::cout << p << std::endl;
    // std::cout << &p << std::endl;
    // std::cout << *p << std::endl;

    // int* x = &v[2];
    // std::cout << square(x) << std::endl;

    std::vector<int> v1 {0,1,2,3,4,5};

    // with for (auto el: v1) we copy all the values of v1 to el,
    // however if we do for (auto& el : v1) we refer el to an element of v1
    // each time
    for (auto& el : v1){
        if ((el%2==0) && (el!=0)) {
            std::cout << el << std::endl;
        }
    }
    std::vector<int> data {1,2,3};
    int last = data.back();
    std::cout << last << std::endl;
    thePrint(data);
    std::cout << "-----------------" << std::endl;
    thePrint(data);
    std::cout << "-----------------" << std::endl;
    std::array<int, 4> aData {0,0,0,0};
    printArray(aData);
    std::cout << "-----------------" << std::endl;
    printArray(aData);
}