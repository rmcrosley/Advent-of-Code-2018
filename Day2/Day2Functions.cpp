// Rachel Crosley
// Day 2
// Advent of Code 2018
// Day2Functions.cpp


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


int checksum (vector<string> s) {
    int ret = 0;
    int numTwos = 0;
    int numThrees = 0;
    
    for(int i = 0; i < s.size(); ++i) {
        ret = checkEachString(s[i]);
        if(ret == 1) ++numTwos;
        else if(ret == 2) ++numThrees;
        else if(ret == 3) {
            ++numThrees;
            ++numTwos;
        }
        ret = 0;
    }
    return numTwos * numThrees;
}


int checkEachString(string s) {
    vector<int> listOfRepeats(s.size());
    char compare = ' ';
    int ret = 0;
    bool twos = false;
    bool threes = false;
    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] != '0') {
            compare = s[i];
            for(int j = i; j < s.size(); ++j) {
                if(s[j] == compare) {
                    ++listOfRepeats[i];
                    s[j] = '0';
                }
            }
        }
    }
    
    for(int i = 0; i < listOfRepeats.size(); ++i) {
        if(listOfRepeats[i] == 2) {
            twos = true;
        }
        else if(listOfRepeats[i] == 3) {
            threes = true;
        }
        if(twos == true && threes == true) {
            return 3;
        }
    }
    
    if(twos) return 1;
    if(threes) return 2;
    
    return ret;
}


string compareIds(vector<string> & s) {
    string id1 = "";
    string id2 = "";
    string ret = "";
    
    
    for(int k = 0; k < s.size(); k++) {
        for(int j = k+1; j < s.size(); j++) {
            id1 = s[k];
            id2 = s[j];
            for(int i = 0; i < id1.size(); ++i) {
                if(id1[i] == id2[i]) {
                    ret += id1[i];
                }
            }
            if(ret.size() == id1.size()-1) {
                return ret;
            }
            ret = "";
        }
    }
    
    return ret;
}














