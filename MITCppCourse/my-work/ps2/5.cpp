#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>


double computePI( const long int n ){
    srand(time(0));
    int dartsIn = 0;
    for (int i=0; i<n; i++){
        double x = ((double) rand() / (RAND_MAX));
        double y = ((double) rand() / (RAND_MAX));
        if (sqrt(x*x + y*y) < 1){
            ++dartsIn;
        }
    }
    return dartsIn/static_cast<double>(n) * 4;
}

int main(){
    std::cout << "PI: " << computePI(500000) << std::endl;
    return 0;
}

