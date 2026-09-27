#include <iostream>
using namespace std;

int main()
{
    const char* aa = "kogasa";     
    char target = 'a';              
    int count = 0;                  

    while (*aa)
    {
        if (*aa == target)
            count++;
        aa++;
    }

    cout << count << endl;          

    return 0;
}
