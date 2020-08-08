#include <unordered_map>
#include <iostream>
#include <ostream>
#include <string>

void foo(const std::unordered_map<int, std::string>& m){
    // it fails
    // std::cout << m[3] << std::endl;
    std::unordered_map<int, std::string>::const_iterator i = m.find(3);
    // if the iterator reaches the end, key is not found
    if (i == m.end()){
        std::cout << "key not found" << std::endl;
    } else {
        std::cout << i->second << std::endl;
    }

}

int main(){
    // It has the same interface as a map, but the datastructure is different
    // The map is a balanced binary implementation (from key to value)
    // The unordered_map is a hash table (from key to value), it will hash the key and it has a chain
    // of buckets that they have special numbers (i.e. hashes)

    std::unordered_map<int, std::string> m;

    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";

    m[2] = "TWO!";

    foo(m);

    for(std::unordered_map<int, std::string>::iterator i = m.begin(); i != m.end(); ++i){
        std::cout << "(" << i->first << ", " << i->second << ")" << std::endl;
    }
    // std::cout << m[2] << std::endl;

    return 0;
}