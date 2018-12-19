// Rachel Crosley
// Day 2
// Advent of Code 2018


#include "Day2Functions.hpp"
#include <iostream>
#include <fstream>
#include <vector>
using std::string;
using std::ifstream;
using std::cout;
using std::endl;



vector<string> readInInput(string inputFilePath) {
    string line;
    vector<string> input;
    ifstream file;
    
    file.open(inputFilePath);
    
    if (!file) {
        cout << "Unable to open file" << endl;
        exit(1);
    }
    
    while(file >> line) {
        input.push_back(line);
    }
    
    file.close();
    
    return input;
}























