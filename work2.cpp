#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char first[40];
    char last[40];
    char combined[100];
    cout << "Enter your first name: ";
    cin.getline(first,40);
    cout << "Enter your last name: ";
    cin.getline(last,40);
    strcpy(combined, last);
    strcat(combined, ", ");
    strcat(combined, first);
    cout << "Here's the information in a single string: " << combined << endl;
    return 0;
}