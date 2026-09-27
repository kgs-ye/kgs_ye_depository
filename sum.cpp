#include <iostream>
using namespace std;
int main()
{
    int i, j, num, original_i;
    cout << "Please enter 2 numbers: ";
    cin >> i >> j;
    original_i = i;
    num = 0;
    for (i; i <= j; i++)
        num = num + i;
    cout << "The sum of all integers from " << original_i << " to " << j << " is " << num << "." << endl;
    return 0;
}