#include <iostream>
using namespace std;

void decimalToBinary(int n)
{
    int ans[32];
    int i = 0;

    while (n)
    {
        ans[i] = n % 2;
        n = n / 2;
        i++;
    }

    // print binary number
    for (int a = i - 1; a >= 0; a--)
    {
        cout << ans[a];
    }
}

int main()
{
    decimalToBinary(15);
}