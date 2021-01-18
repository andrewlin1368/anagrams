#include "anagrams.h"
#ifndef CONTAINER_H
#define CONTAINER_H

class container
{
    map<string, words> storage;

public:
    container();
    void display(string word);
};
#endif