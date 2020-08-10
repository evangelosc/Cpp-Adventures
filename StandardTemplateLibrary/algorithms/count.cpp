#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <vector>

bool even(int n){
    return n%2 == 0;
}

int main(){
    std::vector<int> v {11, 22, 33, 44};

    // if I try to exchange vector with any (hopefully) associative 
    // or sequential container, the form of the count will not change

    std::cout << std::count(v.begin(), v.end(), 33) << std::endl;

    std::cout << std::count_if(v.begin(), v.end(), even) << std::endl;

    // lambda functions
    std::cout << std::count_if(v.begin(), v.end(), [](int n){ return n>30; }) << std::endl;

    return 0;
}