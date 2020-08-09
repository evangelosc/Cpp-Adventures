#include <iostream>
#include <memory>
#include <ostream>
#include <utility>

int main(){
    // The std::shared_ptr<x> is copy constructable

    // sp and sp2 share ownership of an obj, there is a reference count that
    // shows the number of shared ptr that point to an object, it counts up and down
    // depending on the construction and the deconstruction of the shared ptr

    std::shared_ptr<int> sp(new int(1936));
    std::shared_ptr<int> sp2(sp);

    std::cout << *sp << std::endl;
    std::cout << *sp2 << std::endl;

    // in C++11 and later there is a neater way of constructing shared pointers
    
    // std::make_shared is a more efficient way, it constructs an object and a 
    // shared pointer to the object at the same time.

    // it stores the object and the reference count control block in the same memory

    std::shared_ptr<int> spNew = std::make_shared<int>(3459);
    std::cout << *spNew << std::endl;


    // std::shared_ptr<x> does not allow you to point to an array

    return 0;
}