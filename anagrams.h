#ifndef ANAGRAMS_H
#define ANAGRAMS_H
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class words
{
    vector<string> english;

public:
    words(string word);
    void wordinsert(string word);
    friend ostream &operator<<(ostream &o, words &w);
};
#endif