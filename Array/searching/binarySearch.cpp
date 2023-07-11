#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int data)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == data)
        {
            return mid;
        }
        else if (a[mid] > data)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = binarySearch(arr, n, 10000);
    if (res == -1)
    {
        cout << "Element is not found" << endl;
    }
    else
    {
        cout << "Element found at " << res + 1 << endl;
    }
}