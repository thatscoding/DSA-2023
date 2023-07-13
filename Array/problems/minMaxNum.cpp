#include <iostream>
using namespace std;

struct minMaxNum
{
    int min = INT16_MAX;
    int max = INT16_MIN;
} minMax;

void findMinMax(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        minMax.min = min(minMax.min, a[i]);
        minMax.max = max(minMax.max, a[i]);
    }
}

int main()
{
    int arr[] = {2, 4, 56, 47, 0, 5, 458, 481, 64, 84, 61, 649, 6486, 4164, 86, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMinMax(arr, n);

    cout << "min " << minMax.min << endl;
    cout << "max " << minMax.max << endl;
}