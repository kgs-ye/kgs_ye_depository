#include <iostream>
using namespace std;
int number(int);

int main()
{
    cout << "Enter your age: ";
    int years;
    cin >> years;
    int months = number(years);
    
    cout << "Your age in months is "<< months <<"." << endl;
    return 0;
}

int number(int n)
{
    return 12 * n;
}