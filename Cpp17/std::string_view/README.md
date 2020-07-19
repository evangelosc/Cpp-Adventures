# std::string_view
The official description of the std::string_view on the [cppreference](https://en.cppreference.com/w/cpp/string/basic_string_view) is as follows.

<em>"The class template basic_string_view describes an object that can refer to a constant contiguous sequence of char-like objects with the first element of the sequence at position zero."</em>

It's actually the new way on viewing strings in C++. However, string concatenation is not available on string_view due to Jeffrey's Yasskin idea. The latter is as follows. 

<em><strong>I also omitted operator+(basic_string, basic_string_ref) because LLVM returns a lightweight object from this overload and only performs the concatenation lazily. If we define this overload, we'll have a hard time introducing that lightweight concatenation later.</strong></em>

It has been suggested on the std-proposal mailing-list, but there is not update on that yet. If you want to concatenate two string_view data structures, you have to do a work around on your own in order to overload the operator +.

Sometimes we need to use a datastructure that looks like a string and if we use the string_view, we can avoid using a bunch of different strings.