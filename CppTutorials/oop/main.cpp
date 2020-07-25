#include <iostream>
#include <string>
#include <vector>

struct User{
    std::string first;
    std::string last;
    std::string getStatus() { return status; }
    private:
        std::string status;
};

class Userakos{
    public:
        std::string first;
        std::string last;
        std::string getStatus() { return status; }
        static int getUserCount() { return userCount; }
        Userakos() { 
            std::cout << "Constructor" << std::endl;
            userCount++;
        }
        Userakos(std::string firstName, std::string lastName, std::string theStatus){
            this->first = firstName;
            this->last = lastName;
            this->status = theStatus;
            userCount++;
        }
        ~Userakos() {
            std::cout << "Destructor" << std::endl;
            userCount--;
        }
        void setStatus(std::string statusNew){
            if (statusNew == "Gold" || statusNew == "Silver" || statusNew == "Bronze"){
                this->status = statusNew; 
            } else {
                this->status = "No status";
            }
        }

        // void setUserCount(int init) { 
        //     this->userCount = init;
        // }
    private:
        std::string status;
        static int userCount;
};

int Userakos::userCount = 0;
 
int addUserIfNDef(std::vector<Userakos> &users, Userakos user){
    for (int i=0; i<users.size(); i++){
        if (users[i].first==user.first 
        && users[i].last==user.last){
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main(){
    User me;
    me.first = "Nick";
    me.last = "Peterson";
    me.getStatus() = "Gold";

    std::cout << "First Name: " << me.first << std::endl;
    
    Userakos meme;
    meme.first = "Nickos";
    meme.last = "Petegios";
    meme.getStatus() = "Xrisos";
    std::cout << "First Name: " << meme.first << std::endl; 

    std::vector<Userakos> users;

    Userakos user1;
    Userakos user2;
    Userakos user3;
    user1.first = "Sally";
    user1.last = "Swan";
    user2.first = "Jake";
    user2.last = "Johnson";
    user3.first = "Caleb";
    user3.last = "Curry";
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    Userakos user;
    user.first = "Jake";
    user.last = "Johnson";

    std::cout << addUserIfNDef(users, user) << std::endl;

    Userakos userA("theCaleb", "theCurry", "Silver");
    std::cout << userA.first << std::endl;
    std::cout << userA.getStatus() << std::endl;

    Userakos userB;
    userB.setStatus("Tacos");
    std::cout << userB.getStatus() << std::endl;

    Userakos newUserakos;
    std::cout << Userakos::getUserCount() << std::endl;
    newUserakos.~Userakos();
    std::cout << Userakos::getUserCount() << std::endl;

    return 0;
}