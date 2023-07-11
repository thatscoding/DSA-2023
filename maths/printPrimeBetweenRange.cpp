#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            return false;
        }
    }
    if (flag)
    {
        return true;
    }
}

int main()
{
    int a, b;
    cout << "Enter the range the Prime number" << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}