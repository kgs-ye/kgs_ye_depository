#include <iostream>
using namespace std;
int main()
{
    int degree;
    int minute;
    int second;
    cout << "Enter a latitude in degrees, minutes and seconds: " << endl;
    cout << "First, enter the degrees:__\b\b";
    cin >> degree;
    cout << "Next, enter the number of arc:__\b\b";
    cin >> minute;
    cout << "Finally, enter the seconds of arc:__\b\b";
    cin >> second;
    const double degree_to_minute = 60.0;
    const double minute_to_second = 60.0;
    double degrees;
    degrees = degree + minute / degree_to_minute + second / minute_to_second / degree_to_minute;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degrees << " degrees." << endl;
    return 0;
}