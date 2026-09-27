#include <iostream>
void swapr(int & a, int & b);
void swapp(int * a, int * b);
void swapv(int a, int b);
void revalue(int * a, int  * b);
void output(int a, int b);
using namespace std;

int main()
{
    int c = 0;
    int d = 0;
    revalue(&c, &d);
    swapr(c, d);
    output(c, d);

    revalue(&c, &d);
    swapp(&c, &d);
    output(c, d);

    revalue(&c, &d);
    swapv(c, d);
    output(c, d);
}
void revalue(int * a, int * b)
{
    *a = 1;
    *b = 2;
}
void output(int a, int b)
{
    cout << a << endl << b << endl;
}
void swapr(int & a, int & b)
{
    int temp = 0;
    temp = a;
    a = b;
    b= temp;
}
void swapv(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b= temp;            // 失败
}
void swapp(int * a, int * b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}