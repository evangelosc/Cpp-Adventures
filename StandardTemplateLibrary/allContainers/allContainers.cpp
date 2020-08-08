#include <iostream>
#include "allContainers.h"

int main(){
    // The above part should be in a header file
    std::vector<int> theV {1,2,3,4,5,6};
    contain::erase(theV, 3);
    for (std::vector<int>::iterator i = theV.begin(); i != theV.end(); ++i){
        std::cout << *i << std::endl;
    }
    return 0;
}