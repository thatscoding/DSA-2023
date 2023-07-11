#include <iostream>
using namespace std;

int main()
{
    int capacity;
    int size = 5;
    cout << "Enter the capacity of array :" << endl;
    cin >> capacity;

    int arr[capacity] = {10, 20, 30, 40, 50};

    cout << "The values of array :" << endl;
    for (int i = 0; i < capacity; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // case 1: user want ot add value at the last
    // arr[size] =60;
    // size++;

    int pos;
    int data;
    cout << "Enter the postion and data where you want to add data" << endl;
    cin >> pos >> data;

    for (int i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    size++;
    arr[pos - 1] = data;

    cout << "The values of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "size :" << size << endl;
}