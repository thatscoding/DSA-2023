#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0;
    int b = 1;
    int next = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    fib(10);
}