# std::any
The official description of [cppreference](https://en.cppreference.com/w/cpp/utility/any) is as follows.

<em>The class any describes a type-safe container for single values of any type
* An object of class any stores an instance of any type that satisfies the constructor requirements or is empty, and this is referred to as the state of the class any object. The stored instance is called the contained object. Two states are equivalent if they are either both empty or if both are not empty and if the contained objects are equivalent.
* The non-member any_cast functions provide type-safe access to the contained object.
</em>

Long story short; it's an object that can hold anything.
It actually gives us a catch-all kind of object in C++ that we do not normally expect to have access to.

Objects we can put in the std::any cannot be movable, they must be copy constructible. For example, if we try to put in the any a struct, a compile error will occur as follows. <em>error: static assertion failed. The contained object must be CopyConstructible.</em>

It's a handy approach to implement an heterogenous vector of objects in C++.
* <strong>std::any_cast</strong> is used for getting values out. If we want to get out a float from an int, it will not be cascaded. It results in a compile error of bad any_cast
* <strong>v[el].type().name()</strong> returns the type of the element in the vector

