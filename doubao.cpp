#include <iostream>
using namespace std;

int main() {
    const int years = 3;
    const int months = 12;
    int sales[years][months];
    int yearlyTotal[years] = {0};   // 存储每年的总销量

    for (int y = 0; y < years; ++y) {
        cout << "==== Year " << y + 1 << " ====" << endl;
        for (int m = 0; m < months; ++m) {
            cout << "Enter month " << m + 1 << " sales: ";
            cin >> sales[y][m];
            yearlyTotal[y] += sales[y][m];   // 输入时直接累加
        }
        cout << "Year " << y + 1 << " total sales: " << yearlyTotal[y] << endl;
    }

    int grandTotal = 0;
    for (int y = 0; y < years; ++y)
        grandTotal += yearlyTotal[y];

    cout << "Three-year total sales: " << grandTotal << endl;
    return 0;
}