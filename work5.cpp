#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
    string company;
    double diameter;
    double weight;
};
int main()
{
    Pizza p;
    cout << "Enter pizza diameter: ";
    cin >> p.diameter;
    cin.get();
    cout << "Enter pizza weight: ";
    cin >> p.weight;
    cout << "\n====Pizza Info====" << endl;
    cout << "Company: " << p.company << endl;
    cout << "Diameter: " << p.diameter << endl;
    cout << "Weight: " << p.weight << endl;
    return 0;
}