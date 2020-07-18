#include <any>
#include <iostream>
#include <vector>
#include <string>

int main(){
    // Heterogenous vector of objects is C++
    std::vector<std::any> v1 {5, 3.4, std::string("Hello World")};
    // std::any a=1;
    std::cout << v1.size() << std::endl;

    // get values out
    std::cout << std::any_cast<int>(v1[0]) << std::endl;
    std::cout << v1[1].type().name() << std::endl;

    std::any theAny;
    // bad cast
    try
    {
        theAny = 1;
        std::cout << std::any_cast<float>(theAny) << '\n';
    }
    catch (const std::bad_any_cast& e)
    {
        std::cout << e.what() << '\n';
    }

    // has value
    theAny = 1;
    if (theAny.has_value())
    {
        std::cout << theAny.type().name() << '\n';
    }
 
    // reset
    theAny.reset();
    if (!theAny.has_value())
    {
        std::cout << "no value\n";
    }
}