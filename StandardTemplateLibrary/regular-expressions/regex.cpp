#include <iostream>
#include <ios>
#include <ostream>
#include <regex>
#include <string>

int main(){
    std::cout << std::boolalpha;

    // const std::regex r("ab+c");
    // for (std::string s; getline(std::cin, s); ){
    //     std::cout << std::regex_match(s, r) << std::endl;
    //     std::cout << std::endl;
    // }

    // const std::regex r("a(b+)(c+)d");
    // for (std::string s; getline(std::cin, s); ){
    //     std::smatch m;
    //     const bool b = std::regex_match(s, m, r);
    //     std::cout << b << std::endl;
    //     if (b) {
    //         std::cout << m[1] << std::endl;
    //         std::cout << m[2] << std::endl;
    //     }
    // }

    const std::regex r("(\\d{2})/(\\d{2})/(\\d{4})");
    for (std::string s; getline(std::cin, s); ){
        std::smatch m;
        const bool b = std::regex_match(s, m, r);
        std::cout << b << std::endl;
        if (b) {
            std::cout << m[1] << std::endl;
            std::cout << m[2] << std::endl;
            std::cout << m[3] << std::endl;
        }
    }
    

    return 0;
}