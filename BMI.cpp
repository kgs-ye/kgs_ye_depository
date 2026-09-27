#include <iostream>
using namespace std;
int main()
{
    const double inch_to_meter = 0.0254;
    const double kilogram_to_pound = 2.2;
    const int foot_to_inch = 12;
    int inches;
    int feet;
    cout << "Please enter your height (feet inches): " << endl;
    cin >> feet >> inches;
    int pounds;
    cout << endl << "Please enter your weight in pounds:___\b\b\b";
    cin >> pounds;
    int inch;
    inch = feet * foot_to_inch + inches;
    double meter;
    meter = inch * inch_to_meter;
    double kilogram;
    kilogram = pounds / kilogram_to_pound;
    double BMI;
    BMI = kilogram / meter / meter;
    cout << "Your BMI is " << BMI << endl;
    return 0;

}