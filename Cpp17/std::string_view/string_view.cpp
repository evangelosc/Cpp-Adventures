#include <string>
#include <iostream>

std::size_t length(const std::string_view &s){
    return s.size();
}


int main(){

    std::cout << length("Hi! long string here") << std::endl;

    std::string_view theString = "Here is the new string";
    std::cout << theString.size() << std::endl;

}