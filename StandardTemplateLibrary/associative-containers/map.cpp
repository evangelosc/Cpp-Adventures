#include <map>
#include <iostream>
#include <ostream>
#include <string>

int main(){
    std::map<int, std::string> m;

    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";

    m[2] = "TWO!";

    for(std::map<int, std::string>::iterator i = m.begin(); i != m.end(); ++i){
        std::cout << "(" << i->first << ", " << i->second << ")" << std::endl;
    }
    // std::cout << m[2] << std::endl;

    return 0;
}