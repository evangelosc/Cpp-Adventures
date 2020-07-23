#include <iostream>
#include <string>

struct User{
    std::string first;
    std::string last;
    std::string getStatus() { return status; }
    private:
        std::string status;
};

int main(){
    User me;
    me.first = "Nick";
    me.last = "Peterson";
    me.getStatus() = "Gold";

    std::cout << "First Name: " << me.first << std::endl;
    return 0;
}