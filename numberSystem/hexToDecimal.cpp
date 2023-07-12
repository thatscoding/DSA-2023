#include <iostream>
using namespace std;

void hexToDecimal(string s)
{
    int ans = 0;
    int x = 1;
    int n = s.length() - 1;
    cout << n << endl;

    while (n >= 0)
    {
        if (s[n] >= '0' && s[n] <= '9')
        {
            int temp = s[n] - '0';
            ans = ans + temp * x;
            // cout << s[n] << " " << temp << endl;
        }
        else if (s[n] >= 'A' && s[n] <= 'F')
        {
            int temp = s[n] - 'A' + 10;
            ans = ans + temp * x;
            // cout << s[n] << " " << temp << endl;
        }
        x = x * 16;
        n--;
    }
    cout << ans << endl;
}

int main()
{
    hexToDecimal("64");
}