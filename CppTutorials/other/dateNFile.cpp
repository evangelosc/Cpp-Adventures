#include <iostream>
#include <string>
#include <string>
#include <stdio.h>
#include <time.h>
#include <fstream>

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    return buf;
}

int main() {
    std::string x = "a"+currentDateTime()+".csv";
    std::cout << x << std::endl;
    std::ofstream c;
    c.open(x, std::ios::app);
    c << "HI" << "," << "HI" << std::endl;
    c.close();
}
