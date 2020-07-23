#include <iostream>
#include <string>

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
    std::cout << "a: " << a << "\tb: " << b << std::endl;
}

void swap(std::string &s1, std::string &s2){
    std::string tmpString = s1;
    s1 = s2;
    s2 = tmpString;
    std::cout << "s1: " << s1 << "\ts2: " << s2 << std::endl;
}

int main(){
    int a = 10;
    int b = 20;
    swap(a,b);

    std::string s1 = "Hi";
    std::string s2 = "world";
    swap(s1, s2);
}