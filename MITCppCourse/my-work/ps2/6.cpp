#include <iostream>
#define LENGTH 10
#define WIDTH 10


void printArr(const int lista[], const int &len){
    for (int i=0; i<len; i++){
        std::cout << lista[i];
        if (i<len-1){
            std::cout << ", ";
        }else {
            std::cout << std::endl;
        }
    }
}

void reverseInPlace(int listaa[], const int &len){
    for(int i=0; i<len/2; i++){
        int tmp = listaa[i];
        int last = len-i-1;
        listaa[i] = listaa[last];
        listaa[last] = tmp;
    }
}

void transpose(const int input[][LENGTH], int output[][WIDTH]){
    for(int i=0; i<WIDTH, ++i){
        for(int j=0; j<LENGTH; ++j){
            output[j][i] = input[i][j];
        }
    }
}

void reverseP(int l[], const int &len){
    for (int i=0; i<len/2; ++i){
        int tmp = *(l+i);
        int last = len-i-1;
        *(l+i) = *(l+last);
        *(l+last) = tmp;
    }
}

int main(){
    const int lista[] = {0,1,2,3,4,5,6,7,8,9};
    const int len = 10;
    printArr(lista, len);
    int listaa[] = {0,1,2,3,4,5,6,7,8,9};
    reverseInPlace(listaa, len);
    for (int i=0; i<len; i++){
        std::cout << listaa[i];
        if (i<len-1){
            std::cout << ", ";
        }else{
            std::cout << std::endl;
        }
    }
    return 0;
}