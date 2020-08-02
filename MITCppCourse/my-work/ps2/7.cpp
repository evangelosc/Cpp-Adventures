#include <iostream>
#include <string>


int len(const char* str){
    int len = 0;
    while(*(str+len) != '\0'){
        ++len;
    }
    return len;
}

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

void swapP(int *c, int *d){
    // it swaps the values in the pointers
    int tmp = *c;
    *c = *d;
    *d = tmp;
}

void swapPP(int **c, int **d){
    // it swaps two pointer to point ot each other's values
    int *tmp = *c;
    *c = *d;
    *d = tmp;
}

int main(){
    std::cout << len("Maria") << std::endl;
    std::string nameX = "Maria";
    std::cout << nameX.size() << std::endl;

    int x = 5;
    int y = 10;
    swap(x,y);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    swapP(&x,&y);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    int *ptr1 = &x;
    int *ptr2 = &y;
    swapPP(&ptr1, &ptr2);
    std::cout << "x: " << *ptr1 << std::endl;
    std::cout << "y: " << *ptr2 << std::endl;
    return 0;
}

// 7.5
//     char *nthCharPtr = &oddOrEven[5];
//     nthCharPtr -= 2; or nthCharPtr = oddOrEven + 3;
//     cout << *nthCharPtr;
//     char **pointerPtr = &nthCharPtr;
//     cout << pointerPtr;
//     cout << **pointerPtr;
//     nthCharPtr++; to point to the next character in oddOrEven (i.e. one character past
// the location it currently points to)
//     cout << nthCharPtr - oddOrEven;