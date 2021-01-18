#include "container.h"

container::container()
{
    ifstream myfile("words.txt");
    string temp;
    while (myfile >> temp)
    {
        sort(temp.begin(), temp.end());
        auto itr = storage.find(temp);
        if (itr == storage.end())
        {
            words w(temp);
            storage.insert(make_pair(temp, w));
        }
    }
    myfile.close();
}

void container::display(string word)
{
    sort(word.begin(), word.end());
    auto itr = storage.find(word);
    if (itr != storage.end())
        cout << itr->second << "\n";
    else
    {
        cout << "N/A\n";
    }
}