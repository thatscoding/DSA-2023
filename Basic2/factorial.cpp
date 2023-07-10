#include <iostream>
using namespace std;

int Generatefactorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    cout << Generatefactorial(5);
}