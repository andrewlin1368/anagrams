#include "container.h"

int main()
{
    container h;
    string a;
    while (true)
    {
        cout << "Enter a word (press enter to exit): ";
        getline(cin, a);
        if (a.size() == 0)
        {
            cout << "Good Bye\n";
            break;
        }
        cout << "Anagrams of " << a << " : ";
        h.display(a);
    }
    return 0;
}