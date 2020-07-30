#include <iostream>

int main(){
    const char * p1 = "Hello, World!";
    while (*p1!=0){
        std::cout << *p1;
        p1++;
    }
    std::cout << std::endl;
    return 0;
}