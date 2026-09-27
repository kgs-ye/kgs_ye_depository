#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first, last, combined;
    cout << "Enter your first name: ";
    getline(cin, first);
    cout << "Enter your last name: ";
    getline(cin, last);
    combined = last + ", " + first;
    cout << "Here's the information in a single string: " << combined << endl;
    return 0;
}