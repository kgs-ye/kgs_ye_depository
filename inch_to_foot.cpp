#include <iostream>
using namespace std;
int main()
{
    const int inch_to_foot = 12;
    cout << "Please express your height as an integer:__\b\b ";
    int inch;
    cin >> inch;
    cout << "You entered " << inch << "...\n";
    int foot = inch / inch_to_foot;
    int inches = inch % inch_to_foot;
    cout << "Your height is " << foot << " feet " << inches << " inches" << endl;
}