#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int temp = 0;
    while (n)
    {
        int lastDigit = n % 10;
        temp = temp * 10 + lastDigit;
        n = n / 10;
    }
    return temp;
}

int main()
{
    int n = 123456789;
    cout << reverseNumber(n);
}