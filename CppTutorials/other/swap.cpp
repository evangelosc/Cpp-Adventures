#include <iostream>
#include <string>

// void swap(int &a, int &b){
//     int tmp = a;
//     a = b;
//     b = tmp;
//     std::cout << "a: " << a << "\tb: " << b << std::endl;
// }

// void swap(std::string &s1, std::string &s2){
//     std::string tmpString = s1;
//     s1 = s2;
//     s2 = tmpString;
//     std::cout << "s1: " << s1 << "\ts2: " << s2 << std::endl;
// }

template<typename T>
void swap(T &x, T &y){
    T tmp = x;
    x = y;
    y = tmp;
    std::cout << "x: " << x << "\ty: " << y << std::endl;
}

template<typename T>
void swap(T a[], T b[], int size){
    for (int i=0; i<size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main(){
    int a = 10;
    int b = 20;
    swap(a,b);

    std::string s1 = "Hi";
    std::string s2 = "world";
    swap(s1, s2);

    int const SIZE = 7;
    int nines[] = {9,9,9,9,9,9,9}; 
    int ones[] = {0,0,0,0,0,0,0};

    for (int i=0; i<SIZE; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    swap(nines, ones, 7);

    for (int i=0; i<SIZE; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}