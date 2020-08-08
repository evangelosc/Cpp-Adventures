#include <map>
#include <iostream>
#include <ostream>
#include <string>
#include <functional>

void foo(const std::map<int, std::string>& m){
    // it fails
    // std::cout << m[3] << std::endl;
    std::map<int, std::string>::const_iterator i = m.find(3);
    // if the iterator reaches the end, key is not found
    if (i == m.end()){
        std::cout << "key not found" << std::endl;
    } else {
        std::cout << i->second << std::endl;
    }

}

int main(){
    // It's a balanced binary tree from key to value. We can pass a third arg
    // which is the comparator - the way of sorting the elements (as we do in std::sort)
    
    std::map<int, std::string, std::greater<int>> newM;
    std::map<int, std::string> m;

    newM[1] = "one";
    newM[2] = "two";
    newM[3] = "three";
    newM[4] = "four";


    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";

    m[2] = "TWO!";

    foo(m);

    for(std::map<int, std::string>::iterator i = m.begin(); i != m.end(); ++i){
        std::cout << "(" << i->first << ", " << i->second << ")" << std::endl;
    }
    std::cout << std::endl;
    for(std::map<int, std::string>::iterator i = newM.begin(); i != newM.end(); ++i){
        std::cout << "(" << i->first << ", " << i->second << ")" << std::endl;
    }
    // std::cout << m[2] << std::endl;

    return 0;
}