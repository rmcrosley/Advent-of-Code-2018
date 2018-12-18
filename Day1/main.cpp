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




vector<int> organizeInput(vector<string> s) {
    vector<int> ret;
    
    for(int i = 0; i < s.size(); ++i) {
        ret.push_back(std::stoi(s[i]));
    }
    
    return ret;
}






int main() {
    string inputFilePath;
    string line;
    vector<string> input;
    vector<int> frequency;
    int ans = 0;
    ifstream file;
    
    
    cout << "Input: ";
    getline(cin, inputFilePath);
    
    file.open(inputFilePath);
    
    if (!file) {
        cout << "Unable to open file" << endl;
        return 0;
    }
    
    while(file >> line) {
        input.push_back(line);
    }
    
    file.close();
    
    frequency = organizeInput(input);

    for(int i = 0; i < frequency.size(); i++) {
        ans += frequency[i];
    }
    cout << "Answer: " << ans << endl;

    return 0;
}
