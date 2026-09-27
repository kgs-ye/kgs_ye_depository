#include <iostream>
using namespace std;
long double probability(unsigned, unsigned);
int main()
{
    double totals, choices;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
    while ((cin >> totals >> choices) && choices <= totals)
        {
            cout << "You have one choice in ";
            cout << probability(totals, choices);    // compute the odds
            cout << " of winning.\n";
            cout << "Next two numbers (q to quit): ";
        }
    cout << "bye\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned totals, unsigned choices)
{
    long double t;
    long double c;
    long double result = 1;
    for (t = totals, c = choices; c > 0; t-- ,c--)
        result = result / t * c;
    return result;
}