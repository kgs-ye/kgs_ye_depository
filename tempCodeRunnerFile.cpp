#include <iostream>
using namespace std;

int main()
{
    char code;
    int a_grade = 0, b_grade = 0, c_grade = 0, d_grade = 0;

    cout << "Enter a grade (A, B, C, D): ";
    cin >> code;  // 注意：会跳过空白字符，只读取第一个非空白字符

    switch (code)
    {
        case 'A':
            a_grade++;
            break;
        case 'B':
            b_grade++;
            break;
        case 'C':
            c_grade++;
            break;
        case 'D':
            d_grade++;
            break;
        default:
            cout << "Invalid grade entered." << endl;
            break;
    }

    cout << "Counts: A=" << a_grade << ", B=" << b_grade
         << ", C=" << c_grade << ", D=" << d_grade << endl;

    return 0;
}