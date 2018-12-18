// Rachel Crosley
// Day1
// Advent of Code 2018
// main.cpp

#include "Day1Functions.hpp"

#include <iostream>
#include <vector>
#include <fstream>
using std::getline;
using std::string;
using std::cin;
using std::vector;
using std::cout;
using std::endl;
using std::ifstream;




int main() {
    string inputFilePath;
    vector<string> input;
    int ans1 = 0;
    int ans2 = 0;

    
    cout << "Input: ";
    getline(cin, inputFilePath);
    
    input = readInInput(inputFilePath);
    
    ans1 = frequency(input);
    ans2 = twice(input);

    cout << endl;
    cout << "Answer to Part 1: " << ans1 << endl;
    cout << "Answer to Part 2: " << ans2 << endl;

    return 0;
}
