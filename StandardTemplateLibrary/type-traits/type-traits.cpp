#include <iostream>
#include <ostream>
#include <type_traits>
#include <vector>

template <size_t N> void f(const int (&arr)[N], const int *p){
    std::cout << "Array of size " << N << ", distance " << p - &arr[0] << std::endl;
}
template <typename C> void f(const C &c, typename C::const_iterator i){
    std::cout << "Container of size " << c.size() << ", distance ";
    std::cout << i - c.begin() << std::endl;
}

template <typename T> void foo(T t, std::true_type){
    std::cout << t << " integral!" << std::endl;
}

template <typename T> void foo(T t, std::false_type){
    std::cout << t << " floating!" << std::endl;
}

template <typename T> void bar(T t){
    foo(t, typename std::is_integral<T>::type());
}

int main(){
    bar(1729);
    bar(3.14);
    std::cout << std::endl;
    int a[] = {11, 22, 33, 44};
    int *p = &a[2];
    f(a, p);

    std::vector<int> v {11, 22, 33, 44};
    f(v, v.begin() + 3);

    return 0;
}