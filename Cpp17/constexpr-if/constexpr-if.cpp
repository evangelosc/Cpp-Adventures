#include <iostream>
#include <type_traits>

// In the following example the if does not need to be an if constexpr
// however, I have implemented on this way in order to illustrate the 
// use of the if constexpr
template<typename T>
void printInfo(const T&){
    if constexpr(std::is_integral<T>::value){
        std::cout << "is integral" << std::endl;
    } else {
        std::cout << "is not integral" << std::endl;
    }
}

// This is an important point here. The use of if constexpr is mandatory in order
// to compile the code. If we put the if constexpr the branches are chosen in compile
// time depending on the condition and finally 
// we can see we added 1 to our 1 and 0.1 to our 1.1 
template<typename A>
auto returnValue(const A&a){
    if constexpr (std::is_integral<A>::value){
        return a+1;
    } else if constexpr (std::is_floating_point<A>::value){
        return a+0.1;
    } else {
        return a;
    }
}

int main(){
    printInfo(5);
    printInfo(1.5);
    std::cout << returnValue(1) << std::endl;
    std::cout << returnValue(1.1) << std::endl;
    std::cout << returnValue("Else branch") << std::endl;
}