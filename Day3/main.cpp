// Rachel Crosley
// Day3
// Advent of Code 2018
// main.cpp

#include <iostream>
#include <vector>
#include "Day3Functions.hpp"
using std::cout;
using std::endl;
using std::string;
using std::vector;






int main() {
    string inputFilePath = "input.txt";
    vector<string> input;
    int ans1;
    
    cout << "Input: " << inputFilePath << endl;
    
    input = readInInput(inputFilePath);
    
    ans1 = sliceFabric(input);
    
    cout << endl;
    cout << "Answer to Part 1: " << ans1 << endl;
    //cout << "Answer to Part 2: " << ans2 << endl;
    
    
    
    return 0;
}
