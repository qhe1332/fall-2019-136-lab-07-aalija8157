#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
using std::string;
#include "funcs.h"

int main()
{
    string line = "";
    std::ifstream fin("code.txt");
    std::cout << "       int x = 1;  " << "--------> " << removeLeadingSpaces("       int x = 1;  ") << '\n' << "************************************************" << '\n';

    std::cout << "Before indent fix: " << "\n\n";
    while (std::getline(fin, line))
        std::cout << line << '\n';
    fin.close();
    fin.open("code2.txt");
    std::cout << "\nAfter indent fix: " << "\n\n" << indent("code.txt") << '\n' << "************************************************";
    std::cout << "\n\nBefore indent fix: \n";
    while (std::getline(fin, line))
        std::cout << line << '\n';
    std::cout << "\nAfter indent fix: \n\n" << indent("code2.txt");
}
