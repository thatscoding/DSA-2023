#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void decimalToHex(int n)
{
    string ans;

    while (n)
    {
        int temp = n % 16;
        n = n / 16;

        if (temp >= 0 && temp <= 9)
        {
            ans = ans + to_string(temp);
        }
        else
        {
            char ch = 'A' + (temp - 10);
            ans.push_back(ch);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main()
{
    decimalToHex(100);
}