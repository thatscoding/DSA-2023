#include <iostream>
using namespace std;

void decimalToOctal(int n)
{
    int ans[32];
    int i = 0;

    while (n)
    {
        ans[i] = n % 8;
        n = n / 8;
        i++;
    }

    for (int a = i - 1; a >= 0; a--)
    {
        cout << ans[a];
    }
}

int main()
{
    decimalToOctal(100);
}