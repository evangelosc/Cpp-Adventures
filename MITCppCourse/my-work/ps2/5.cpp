#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    srand(time(0));
    double x = ((double) rand() / (RAND_MAX));
    double y = ((double) rand() / (RAND_MAX));

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    return 0;
}