#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is not Prime" << endl;
    }
}