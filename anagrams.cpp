#include "anagrams.h"

words::words(string word)
{
    ifstream myfile("words.txt");
    string temp2;
    while (myfile >> temp2)
    {
        string temp3 = temp2;
        sort(temp2.begin(), temp2.end());
        if (temp2 == word)
            wordinsert(temp3);
    }
}

void words::wordinsert(string word)
{
    english.push_back(word);
}

ostream &operator<<(ostream &o, words &w)
{
    for (auto x : w.english)
        o << x << " ";
    return o;
}