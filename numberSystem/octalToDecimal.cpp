#include <iostream>
using namespace std;

void octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n)
    {
        int temp = n % 10;
        n = n / 10;
        ans = ans + temp * x;
        x = x * 8;
    }
    cout << ans << endl;
}

int main()
{
    octalToDecimal(144);
}