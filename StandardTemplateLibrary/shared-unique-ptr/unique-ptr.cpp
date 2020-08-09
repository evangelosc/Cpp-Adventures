#include <iostream>
#include <memory>
#include <ostream>
#include <utility>

int main(){
    // unique pointer is the unique owner of a dynamically allocated obj
    // the destructor of a unique_ptr takes care of the delete operation
    // of the dynamically allcated memory
    std::unique_ptr<int> up(new int(1845));
    std::cout << *up << std::endl;
    std::cout << "done" << std::endl;

    // if I want to move ownership of object X to a unique_ptr called up2
    // I have to point to object X from up2 and null out (nullptr) the up
    
    // If I try to get up2 directly from up, I get a compiler error
    // std::unique_ptr<x> are not copy constructable but move constructable

    // std::move(std::unique_ptr) does the job for us and it resides in 
    // the utility header

    std::unique_ptr<int> up2 = std::move(up);

    if (up){
        std::cout << "wrong" << std::endl;
    } else {
        std::cout << "yeah" << std::endl;
    }
    std::cout << *up2 << std::endl;


    // Example: Return a std::unique_ptr<x> from a function
    // std::unique_ptr<x> fun(){
    //     std::unique_ptr<x> ret;
    //     .
    //     .
    //     .
    //     .
    //     return ret;
    // }

    // std::unique_ptr<x[]> is a unique pointer that points at
    // the first element of an array x
    

    return 0;
}