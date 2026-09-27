#include <iostream>
using namespace std;
int main()
{
    int years = 0;
    double Cleo = 100;
    double Daphne = 100;
    for (Daphne; years < 101; Daphne += 10)
        { years += 1;
          cout << "In year " << years << " , " << "Daphne's income is " << Daphne << " dollars." << endl;
        }
    years = 0;
    for (Cleo; years < 101; Cleo *= 1.05)
        { years += 1;
          cout << "In year " << years << " , " << "Cleo's income is " << Cleo << " dollars." << endl;
        }
    return 0;
}