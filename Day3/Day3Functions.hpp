// Rachel Crosley
// Day3
// Advent of Code 2018
// Day3Functions.hpp

#ifndef Day3Functions_hpp
#define Day3Functions_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <map>
using std::vector;
using std::string;
using std::map;
using std::pair;
using std::stoi;



vector<string> readInInput(string inputFilePath);

int sliceFabric(vector<string>);

void parse(map<pair<int, int>, int> &, string);


#endif /* Day3Functions_hpp */
