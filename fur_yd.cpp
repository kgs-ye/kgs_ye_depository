#include <iostream>
using namespace std;

int number(int);

int main()
{
    cout << "Enter the number of furs" << endl;
    int count;
    cin >> count;
    cout << number(count) << " yd" << endl;
    cout << "Done!" << endl;
    return 0;
}

int number(int n)
{
    cout << n << " fur = " << n * 220 << " yd" << endl;
    return n * 220;
}