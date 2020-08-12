#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(){
    const int arr[] = {22, 99, 33, 44, 55};

    std::vector<int> v;
    v.push_back(11);
    v.push_back(77);
    for(auto i = v.begin(); i != v.end(); ++i){
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    std::copy(arr, arr + sizeof(arr) / sizeof(arr[0]), std::back_inserter(v));
    
    // It's not really safe
    std::vector<int> vNew {10,11};
    v.insert(v.end(), arr, arr + sizeof(arr) / sizeof(arr[0]));
    for (auto el : v){
        std::cout << el << " ";
    }
    std::cout << std::endl;
    
    std::for_each(v.begin(), v.end(), [](int n) { std::cout << n << " "; });
    std::cout << std::endl;

    std::sort(v.begin(), v.end());
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    
    // Binary Search
    auto i = std::lower_bound(v.begin(), v.end(), 50);
    std::cout << i - v.begin() << std::endl;

    // std::transform
    std::vector<int> t { 1,2,3,4,5 };
    std::vector<int> res;
    std::transform(t.begin(), t.end(), t.begin(), [](int n) -> int{ return ++n; });
    for (auto el : t){
        std::cout << el << " ";
    }
    std::cout << std::endl;

    return 0;
}