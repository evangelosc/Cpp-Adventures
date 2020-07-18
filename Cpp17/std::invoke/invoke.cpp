#include <functional>
#include <iostream>


int doSomething(const int i){
    return 5 + i;
}

struct S{
    int iS = 5;
    int doSomethingS(const int i){
        return iS + i;
    }
    int doSomethingS2(const int i){
        return iS * i;
    }
};

int main(){
    std::cout << std::invoke(&doSomething, 5) << std::endl;

    S example;
    std::cout << example.doSomethingS(4) << std::endl;

    auto structPtr = &S::doSomethingS;
    int (S::*structPtr2)(int) = nullptr;

    if (true){
        structPtr2 = &S::doSomethingS2;
    }else{
        structPtr2 = &S::doSomethingS;
    }

    std::cout << (example.*structPtr)(3) << std::endl;
    std::cout << (example.*structPtr2)(2) << std::endl;

    std::cout << std::invoke(&S::doSomethingS, example, 10) << std::endl;
    
    // even access member data of example called iS
    std::cout << std::invoke(&S::iS, example) << std::endl;
}