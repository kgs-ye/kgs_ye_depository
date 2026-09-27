#include <iostream>
using namespace std;

int main()
{
    char choice;
    do 
    {
        int sum = 0;          // 本次会话的累加和
        int input;
        cout << "Enter integers (0 to stop): ";

        while (true) 
        {
            cin >> input;
            if (input == 0)
                break;        // 遇到 0 退出循环
            sum += input;     // 累加
        }

        cout << "The cumulative sum is: " << sum << endl;
        cout << "Do you want to start a new session? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}