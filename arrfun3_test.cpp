#include <iostream>
using namespace std;
const int MAX = 5;
int input (double arr[], int limit);         
void output (const double arr[], int limit);
void revalue (double arr[], int limit, double revalue);
int main()
{
    double score[MAX];
    double coefficient;
    cout << "Now please enter the students' scores one by one: " << endl;
    int size = input (score, MAX);
    cout << "Please enter a revalue coefficient: " << endl;
    cin >> coefficient;
    cout << "total number of students: " << size << endl;
    cout << "list: " << endl;
    output(score, size);
    cout << "After revaluing: " << endl;
    revalue (score, size, coefficient);
    output(score, size);
    return 0;
}

int input (double arr[], int limit)
{
    int i;
    for (i = 0; i < limit; i++)
    {
        cin >> arr[i];
    }
    return i;
}

void output(double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "student# " << i+1 << ": " << arr[i] << endl;
    }
}

void revalue (double arr[], int n, double revalue)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= revalue;
    }
}