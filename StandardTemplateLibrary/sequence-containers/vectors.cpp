#include <iostream>
#include <vector>
#include <functional>
#include <ostream>
#include <string>
#include <algorithm>


int main(){

    std::vector<int> newV {11,22,33,44,55};

    // std::remove_if is from the algorithms header, it populates the vector
    // with the "good elements" and returns an iterator at the position where the
    // first "bad element" is located at
    // std::vector.erase() will erase everything from the location of the 
    // iterator and afterwards
    for(std::vector<int>::iterator i = newV.begin(); i != newV.end(); ++i){
        std::cout << *i << std::endl;
    }
    std::cout << std::endl;

    newV.erase(std::remove_if(newV.begin(), newV.end(),
                            [](int e){ return e%2 == 1; }), newV.end() );

    for (auto el : newV){ std::cout << el << std::endl; }
    std::cout << std::endl;

    std::vector<std::string> v;

    v.push_back("cat");
    v.push_back("antelope");
    v.push_back("puppy");
    v.push_back("bear");

    // sort them in lexicographical order
    sort(v.begin(), v.end());

    // sort them in anti-lexicographical order
    sort(v.begin(), v.end(), std::greater<std::string>());

    // sort them using a lambda fun
    stable_sort(v.begin(), v.end(), 
        [](const std::string &left, const std::string &right){
            return left.size() < right.size();
        });

    for(std::vector<std::string>::iterator i = v.begin(); i != v.end(); ++i){
        std::cout << *i << std::endl;
    }

    return 0;
}