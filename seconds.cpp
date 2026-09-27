#include <iostream>
using namespace std;
int main()
{
    int days;
    int hours;
    int minutes;
    int seconds;
    int second;
    int minute;
    int hour;
    int day;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    minutes = seconds / 60;
    second = seconds % 60;
    hours = minutes / 60;
    minute = minutes % 60;
    days = hours / 24;
    hour = hours % 24;
    cout << seconds << " seconds = " << days << " days, " << hour << " hours, " << minute << " minutes, " << second << " seconds." << endl;
    return 0;
}