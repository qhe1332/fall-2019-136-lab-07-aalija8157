#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

using std::string;

string removeLeadingSpaces(string line)
{
    string removed = "";
    int i = 0;
    while (line[i] == ' ')
        i++;
    for (i; i < line.length(); i++)
        removed += line[i];

    return removed;
}

int countChar(string line, char c)
{
    int count = 0;
    for (int i = 0; i < line.length(); i++)
        if (line[i] == c)
            count++;
    return count;
}

string indent(string filename)
{
    int numtabs = 0;
    string line = "";
    std::ifstream fin(filename);
    string out = "";
    while (std::getline(fin, line))
    {
        line = removeLeadingSpaces(line);
        if (countChar(line, '}') >= 1)
            numtabs = numtabs - 1;
        for (int i = 0; i < numtabs; i++)
            out = out + '\t';
        if (countChar(line, '{') >= 1)
            numtabs = numtabs + 1;
        out = out + line + '\n';
    }
    return out;
}
