#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter a word: ";
    cin >> name;

    int j;

    for (j = name.size(); j >= 0; j--)
    {
        cout << name[j] ;
    }
    return 0;
}
