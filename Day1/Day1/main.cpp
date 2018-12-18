// Rachel Crosley
// Day1
// Advent of Code 2018
// main.cpp

#include <iostream>
#include <vector>
using std::getline;
using std::string;
using std::cin;
using std::vector;
using std::cout;
using std::endl;




vector<int> organizeInput(string s) {
    vector<int> ret;
    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '-') {
            ret.push_back((s[i+1] - 48) * -1);
            i = i+1;
        }
        else if(s[i] != ',' && s[i] != '+' && s[i] != ' ') {
            ret.push_back(s[i] - 48);
        }
    }
    
    return ret;
}






int main() {
    string input;
    vector<int> frequency;
    int ans = 0;
    
    cout << "Input: ";
    getline(cin, input);
    
    
    frequency = organizeInput(input);
    
    for(int i = 0; i < frequency.size(); i++) {
        ans += frequency[i];
    }
    cout << ans << endl;
    
    return 0;
}
