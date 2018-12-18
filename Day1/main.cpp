// Rachel Crosley
// Day1
// Advent of Code 2018
// main.cpp

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




int organizeInput(vector<string> s) {
    vector<int> ret;
    int ans = 0;
    
    for(int i = 0; i < s.size(); ++i) {
        ret.push_back(std::stoi(s[i]));
    }
    
    for(int i = 0; i < ret.size(); i++) {
        ans += ret[i];
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




int main() {
    string inputFilePath;
    vector<string> input;
    vector<int> frequency;
    int ans1 = 0;

    
    cout << "Input: ";
    getline(cin, inputFilePath);
    
    input = readInInput(inputFilePath);
    
    ans1 = organizeInput(input);

    cout << endl;
    cout << "Answer to Part 1: " << ans1 << endl;

    return 0;
}
