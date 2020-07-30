#include <iostream>
#include <vector>

// int sum(int n1, int n2, int n3){
//     return n1+n2+n3;
// }

int sum(int n1=3, int n2=5, int n3=7){
    return n1+n2+n3;
}



int main(){

    // std::cout << sum(3,5,7) << std::endl;
    std::cout << sum() << std::endl;
    return 0;
}