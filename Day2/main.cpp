// Rachel Crosley
// Day 2
// Advent of Code 2018
// main.cpp


#include <iostream>
#include "Day2Functions.hpp"
using std::cout;
using std::endl;






int main() {
    string inputFilePath = "input.txt";
    vector<string> input;
    int ans1;
    string ans2;
    
    cout << "Input: " << inputFilePath << endl;
    
    input = readInInput(inputFilePath);
    
    ans1 = checksum(input);
    ans2 = compareIds(input);
    
    cout << endl;
    cout << "Answer to Part 1: " << ans1 << endl;
    cout << "Answer to Part 2: " << ans2 << endl;
    
    return 0;
}
