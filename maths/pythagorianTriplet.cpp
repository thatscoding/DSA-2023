#include <iostream>
using namespace std;

bool pythagorianTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    return (a * a == (b * b + c * c)) ? true : false;
}

int main()
{

    if (pythagorianTriplet(3, 4, 5))
    {
        cout << "Pythagorian Triplet" << endl;
    }
    else
    {
        cout << "Not Pythagorian Triplet" << endl;
    }
}