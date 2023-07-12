#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    int sum = n * (n + 1) / 2;
    cout << "sum " << sum << endl;

    sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    cout << " sum " << sum << endl;
}