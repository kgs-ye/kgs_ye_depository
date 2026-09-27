#include <iostream>
using namespace std;
double centigrade(int);

int main()
{
    cout << "Please enter a Celsius value: ";
    int celsius;
    cin >> celsius;
    double fahrenheit = centigrade(celsius);
    cout << ""<< celsius <<" degrees Celsius is "<< fahrenheit <<" degrees Fahrenheit.";
    return 0;
}
double centigrade(int n)
{
    return n * 1.8 + 32;
}