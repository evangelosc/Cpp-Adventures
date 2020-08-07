#include <iostream>
#include <list>
#include <algorithm>

int main(){
    std::list<int> l = {1,2,3,4,6,3,2};

    l.push_front(55);
    l.push_back(10);

    std::list<int>::iterator it = std::find(l.begin(), l.end(), 4);
    if (it != l.end()){
        l.insert(it, 40);
    }

    for (int el : l){
        std::cout << el << std::endl;
    }
    return 0;
}