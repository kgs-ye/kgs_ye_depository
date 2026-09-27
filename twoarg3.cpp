#include <iostream>
using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "Enter a character, or enter 'q' to quit. ";
        cin >> ch;
    }
    cout << "times: " << times;
    return 0;
}
void n_chars(char ch, int times)
{
    while (times-- > 0)
        cout << ch << endl;
        
}