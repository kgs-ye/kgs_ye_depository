#include <iostream>
using namespace std;
struct travel_time
{
    int hours;
    int mins;
};
const int hrs_to_mins = 60;
void show_time(travel_time t);
travel_time sum(travel_time t1, travel_time t2);

int main()
{
    travel_time day1 = {1, 30};
    travel_time day2 = {2, 45};
    travel_time day3 = {4, 0};
    travel_time trip = sum(day1, day2);
    travel_time all = sum(trip, day3);
    show_time(trip);
    show_time(all);
    show_time(sum(day2, day3));
    return 0;
}
void show_time(travel_time t)
{
    cout << t.hours << endl << t.mins << endl;
}
travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / hrs_to_mins;
    total.mins = (t1.mins + t2.mins) % hrs_to_mins;
    return total;
}