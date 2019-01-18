// Rachel Crosley
// Day3
// Advent of Code 2018
// Day3Functions.cpp

#include "Day3Functions.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::stoi;



vector<string> readInInput(string inputFilePath) {
    string line;
    vector<string> input;
    ifstream file;
    
    file.open(inputFilePath);
    
    if (!file) {
        cout << "Unable to open file" << endl;
        exit(1);
    }
    
    while(getline(file, line)) {
        input.push_back(line);
    }
    
    file.close();
    
    return input;
}


int sliceFabric(vector<string> s) {
    int counter = 0;
    map<pair<int, int>, int> coords;
    
    
    for(int i = 0; i < s.size(); ++i) {
        parse(coords, s[i]);
    }
    
    for (const auto & [key, value] : coords) {
        if(value > 1) {
            ++counter;
        }
    }
    
    
    return counter;
}


    
void parse(map<pair<int, int>, int> & c, string s) {
    int x = 0;
    int y = 0;
    int right = 0;
    int down = 0;
    
    
    int iter = 0;
    string temp = "";
    while(s[iter] != '@') {
        ++iter;
    }
    ++iter; //@
    ++iter; //
    
    while(s[iter] != ',') {
        temp += s[iter];
        ++iter;
    }
    ++iter; //,
    x = stoi(temp);
    temp = "";
   
    while(s[iter] != ':') {
        temp += s[iter];
        ++iter;
    }
    ++iter; //:
    ++iter; //
    y = stoi(temp);
    temp = "";
    
    while(s[iter] != 'x') {
        temp += s[iter];
        ++iter;
    }
    ++iter; //x
    right = stoi(temp);
    temp = "";
    
    while(s[iter] != ' ') {
        temp += s[iter];
        ++iter;
    }
    down = stoi(temp);
    
    
    //add coords to map
    pair<int, int> coordToAdd;
    pair<pair<int, int>, int> adding;
    for(int i = 0; i < right; ++i) {
        for(int j = 0; j < down; ++j) {
            coordToAdd.first = x+i;
            coordToAdd.second = y+j;
            auto search = c.find(coordToAdd);
            if(search != c.end()) {
                search -> second = search -> second + 1;
            }
            else {
                adding.first = coordToAdd;
                adding.second = 1;
                c.insert(adding);
            }
        }
    }
    
}








