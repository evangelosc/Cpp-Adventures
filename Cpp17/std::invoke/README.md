# std::invoke
The official description of the std::invoke on the [cppreference](https://en.cppreference.com/w/cpp/utility/functional/invoke) is complicated.

What we've got is a function that gives us a uniform interface into calling callable things.
The main advantage is not having to know things that are considered rather esoteric in the C++ world, such as how to invoke invoke a member function pointer.

The universal interface into calling anything that's callable gives us handy implementations of passing around function pointers or member function pointers or templates which take callable things. Furthermore, we avoid overloading things.

std::invoke( f, args... ) is a slight generalization of typing f(args...) that also handles a few additional cases.

Something callable includes a function pointer or reference, a member function pointer, an object with an operator(), or a pointer to member data.