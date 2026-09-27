#include <iostream>
using namespace std;
void cheers(int);
double cube(double x);
int main()
{
    cheers(5);
    cheers(cube(5));
    double side;
    cin >> side;
    cout << "A " << side << "-foot cube has a volume of " << cube(side) << " cubic feet.";
    return 0;
}
void cheers(int n)
{
    for (int i = 0; i < n; i++)
        cout << "Cheers!!!";
    cout << endl;
}
double cube(double x)
{
    return x * x * x;
}