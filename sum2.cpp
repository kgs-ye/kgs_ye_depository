#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Please enter 2 numbers: ";
    cin >> start >> end;

    // 如果用户输入顺序反了（例如 7 3），自动交换，保证 start <= end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;          // 等价于 sum = sum + i
    }

    cout << "The sum of all integers from " << start << " to " << end << " is " << sum << "." << endl;
    return 0;
}