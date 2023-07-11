#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int data)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 80, 70, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = linearSearch(arr, size, 400);
    if (res == -1)
    {
        cout << "element is not found" << endl;
    }
    else
    {
        cout << "Element found at place " << res + 1 << endl;
    }
}