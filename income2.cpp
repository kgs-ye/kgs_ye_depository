#include <iostream>
using namespace std;

int main()
{
    double daphne = 100.0;
    double cleo   = 100.0;
    int year = 0;

    while (true) {
        year++;                 // 进入下一年
        daphne += 10.0;         // Daphne 固定 +10
        cleo   *= 1.05;         // Cleo 复利 5%

        if (cleo > daphne) {
            cout << "After " << year << " years, Cleo's investment ("
                 << cleo << ") exceeds Daphne's (" << daphne << ")." << endl;
            break;
        }
    }

    return 0;
}