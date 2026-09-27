#include <iostream>
using namespace std;
char * buildstr(char c, int n);
int main()
{
    char ch;
    int times = 0;
    cin >> ch;
    cin >> times;
    char *output = buildstr(ch, times);
    cout << output;
    delete[] output;
    return 0;
}
char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0';
    for (int i = 0; i < n; i++)
    {
        pstr[i] = c;
    }
    return pstr;
}