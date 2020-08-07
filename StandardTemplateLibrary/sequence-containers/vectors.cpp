#include <iostream>
#include <vector>
#include <functional>
#include <ostream>
#include <string>
#include <algorithm>


int main(){
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