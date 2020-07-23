#include <iostream>
#include <fstream>
#include <vector>
#include <string>



int main(){
    // write to file
    std::ofstream file;
    std::string filename;
    std::cout << "Filename: ";
    std::cin >> filename;
    file.open(filename, std::ios::app);
    if (file.is_open()){
        std::cout << "success noob" << std::endl;
    } else {
        std::cout << "no success noob" << std::endl;
    }
    
    std::vector<std::string> names;
    names.push_back("Nick here");
    names.push_back("Paul");
    names.push_back("Peter");

    for (auto el : names){
        file << el << std::endl;
    }
    file.close();


    // read from file
    std::ifstream theFile;
    theFile.open(filename);
    std::string input;
    std::vector<std::string> ournames;
    while(std::getline(theFile,input)){
        ournames.push_back(input);
    }
    for (auto el : ournames){
        std::cout << el << std::endl;
    }
    return 0;
}