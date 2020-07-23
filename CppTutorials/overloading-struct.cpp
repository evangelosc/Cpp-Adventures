#include <iostream>
#include "utils.h"


int main(){
    Rectangle r;
    r.length = 5;
    r.width = 2;
    std::cout << area(r.length, r.width) << std::endl;
    std::cout << area(r.length) << std::endl;
    std::cout << area(r) << std::endl;
    return 0;
}