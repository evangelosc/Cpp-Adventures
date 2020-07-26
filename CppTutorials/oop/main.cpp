#include <iostream>
#include <string>
#include <vector>
#include "Userakos.h"
#include "teacher.h"


int main(){
    // User me;
    // me.first = "Nick";
    // me.last = "Peterson";
    // me.getStatus() = "Gold";

    // std::cout << "First Name: " << me.first << std::endl;
    
    // Userakos meme;
    // meme.first = "Nickos";
    // meme.last = "Petegios";
    // meme.getStatus() = "Xrisos";
    // std::cout << "First Name: " << meme.first << std::endl; 

    // std::vector<Userakos> users;

    // Userakos user1;
    // Userakos user2;
    // Userakos user3;
    // user1.first = "Sally";
    // user1.last = "Swan";
    // user2.first = "Jake";
    // user2.last = "Johnson";
    // user3.first = "Caleb";
    // user3.last = "Curry";
    // users.push_back(user1);
    // users.push_back(user2);
    // users.push_back(user3);

    // Userakos user;
    // user.first = "Jake";
    // user.last = "Johnson";

    // std::cout << addUserIfNDef(users, user) << std::endl;

    // Userakos userA("theCaleb", "theCurry", "Silver");
    // std::cout << userA.first << std::endl;
    // std::cout << userA.getStatus() << std::endl;

    // Userakos userB;
    // userB.setStatus("Tacos");
    // std::cout << userB.getStatus() << std::endl;

    // Userakos newUserakos;
    // std::cout << Userakos::getUserCount() << std::endl;
    // newUserakos.~Userakos();
    // std::cout << Userakos::getUserCount() << std::endl;

    // Userakos user;
    // user.first = "Caleb";
    // user.last = "Curry";
    // user.setStatus("Gold");
    // std::cin >> user;
    // std::cout << user << std::endl;
    // outputStatus(user);

    // Teacher teacher;
    // teacher.output();

    // Polymorphism
    Teacher teacher;
    Userakos& u = teacher;
    u.output();

    return 0;
}