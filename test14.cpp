#include <iostream>
using namespace std;

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) 
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) 
            break;
        ar[i] = temp;
    }
    return i;
}
int main()
{
    const int SIZE = 5;
    double arr[SIZE];
    int count = fill_array(arr, SIZE);
    cout << count << endl;
    for (int j = 0; j < count; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}