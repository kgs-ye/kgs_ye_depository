#include <iostream>
#include <string>
using namespace std;
const int ArSize = 5;
void display(const string sa[], int n);
int main()
{
    string list[ArSize];
    for (int i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        getline(cin,list[i]);
    }
    display(list, ArSize);

    return 0;
}

void display (const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << sa[i] << endl;
}