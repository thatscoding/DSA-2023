#include <iostream>
using namespace std;

void binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n)
    {
        int lastDigit = n % 10;
        n = n / 10;
        ans = ans + lastDigit * x;
        x = x * 2;
    }
    cout << ans << endl;
}

int main()
{
    binaryToDecimal(1010);
}