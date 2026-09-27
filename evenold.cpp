#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character (type '#' to quit): ";
    while (cin.get(ch) && ch != '#')
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            cout << ch << " is an English letter." << endl;
        else
            cout << ch << " is not a letter." << endl;
        cout << "Enter another character: ";
    }
    cout << "Done." << endl;
    return 0;
}