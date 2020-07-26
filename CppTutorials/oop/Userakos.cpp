#include <string>
// #include <iostream>
#include "Userakos.h"

// struct User{
//     std::string first;
//     std::string last;
//     std::string getStatus() { return status; }
//     private:
//         std::string status;
// };

std::string Userakos::getStatus() { return status; }
int Userakos::getUserCount() { return userCount; }
Userakos::Userakos() { 
    std::cout << "Constructor" << std::endl;
    userCount++;
}
Userakos::Userakos(std::string firstName, std::string lastName, std::string theStatus){
    this->first = firstName;
    this->last = lastName;
    this->status = theStatus;
    userCount++;
}
Userakos::~Userakos() {
    std::cout << "Destructor" << std::endl;
    userCount--;
}
void Userakos::setStatus(std::string statusNew){
    if (statusNew == "Gold" || statusNew == "Silver" || statusNew == "Bronze"){
        this->status = statusNew; 
    } else {
        this->status = "No status";
    }
}

void Userakos::output(){ std::cout << "I'm a user." << std::endl;}

// void setUserCount(int init) { 
//     this->userCount = init;
// }

void outputStatus(Userakos user){
    std::cout << user.status << std::endl;
}

int Userakos::userCount = 0;
 
// int addUserIfNDef(std::vector<Userakos> &users, Userakos user){
//     for (int i=0; i<users.size(); i++){
//         if (users[i].first==user.first 
//         && users[i].last==user.last){
//             return i;
//         }
//     }
//     users.push_back(user);
//     return users.size() - 1;
// }

std::ostream& operator<<(std::ostream& output, const Userakos user){
    output << "First: " << user.first << " Last: " << user.last << 
    " Status: " << user.status << std::endl;
    return output;
}

std::istream& operator>>(std::istream& input, Userakos& user){
    input >> user.first >> user.last >> user.status;
    return input;
}