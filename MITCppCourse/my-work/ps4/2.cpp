#include <iostream>
#define minMac(x,y) (x < y ? x : y)

template<typename T>
T min(const T t1, const T t2){
    return t1 < t2 ? t1 : t2;
}

int main(){
    double a = 1.0/1234;
    double b = 112.23;

    std::cout << min(a,b) << std::endl;
    std::cout << minMac(a,b) << std::endl;

    return 0;
}