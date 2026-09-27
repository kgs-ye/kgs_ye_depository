#include <iostream>
#include <cmath>
using namespace std;

struct rect
{
    double x_pos;
    double y_pos;
};
struct polar
{
    double distance;
    double angle;
};
const double Rad_to_deg = 57.29577951;   // radian degree
polar rect_to_polar(rect xypos);
void show_answer(polar answer);

int main()
{
    rect rplace;
    polar pplace;
    while (cin >> rplace.x_pos >> rplace.y_pos)
    {
        pplace = rect_to_polar(rplace);
        show_answer(pplace);
    }
    return 0;
}

polar rect_to_polar(rect xypos)
{
    polar answer;
    answer.distance = sqrt(xypos.x_pos * xypos.x_pos + xypos.y_pos * xypos.y_pos);
    answer.angle = atan2(xypos.y_pos, xypos.x_pos) * Rad_to_deg;
    return answer;
}

void show_answer(polar dapos)
{
    cout << dapos.distance << endl;
    cout << dapos.angle << endl;
}