#include <iostream>
#ifndef USERAKOS_H
#define USERAKOS_H


class Userakos{
    public:
        std::string first;
        std::string last;
        std::string getStatus();
        static int getUserCount();
        Userakos();
        Userakos(std::string firstName, std::string lastName, std::string theStatus);
        ~Userakos();
        void setStatus(std::string statusNew);

        // void setUserCount(int init) { 
        //     this->userCount = init;
        // }
        friend void outputStatus(Userakos user);
        virtual void output();
        friend std::istream& operator>>(std::istream& input, Userakos& user);
        friend std::ostream& operator<<(std::ostream& output, const Userakos user);
    private:
        std::string status;
        static int userCount;
};

#endif