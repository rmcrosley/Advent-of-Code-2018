// Rachel Crosley
// Day1
// Advent of Code 2018
// Day1Functions.cpp

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


int frequency(vector<string> s) {
    int ans = 0;
    
    for(int i = 0; i < s.size(); i++) {
        ans += std::stoi(s[i]);
    }
    
    return ans;
}


int twice(vector<string> s) {
    int ans = 0;
    vector<int> prevFreq;

    int i = 0;
    while(true) {
        
        if(i == s.size()) {
            i = 0;
        }
        ans += std::stoi(s[i]);
        
        if(i == 0) {
            prevFreq.push_back(ans);
        }
        else {
            for(int j = 0; j < prevFreq.size(); j++) {
                if(prevFreq[j] == ans) {
                    return ans;
                }
            }
            prevFreq.push_back(ans);
        }
        ++i;
    }
    
    return ans;
}




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














