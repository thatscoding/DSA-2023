#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrongNum(int n)
{
    int size = 0;
    int temp = n;
    int temp2 = n;
    while (temp)
    {
        temp = temp / 10;
        size++;
    }
    temp = 0;
    while (n)
    {
        int lastDigit = n % 10;
        temp = temp + pow(lastDigit, size);
        cout << lastDigit << " " << temp << endl;
        n = n / 10;
    }
    return (temp2 == temp) ? true : false;
}

int main()
{
    int n = 371;
    if (isArmstrongNum(n))
    {
        cout << "Number is Armstrong" << endl;
    }
    else
    {
        cout << "Number is not Armstrong" << endl;
    };
}