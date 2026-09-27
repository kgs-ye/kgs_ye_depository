#include <iostream>
using namespace std;
const int num = 16;
int main()
{
    long long factorials[num];
    factorials[0] = factorials[1] = 1LL;
    for (int i = 2; i < num; i++)
    {
        factorials[i] = factorials[i-1] * i;
        cout << factorials[i] << endl;
    }
    return 0;
}