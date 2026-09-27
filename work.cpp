#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first, last;
    char grade;
    int age;
    cout << "What is your first name? ";
    getline(cin,first);
    cout << "What is your last name? ";
    getline(cin,last);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    // 成绩将向下调一个字符 A->B, B->C, C->D
    grade = grade + 1;
    cout << "Name: " << last << ", " << first << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}