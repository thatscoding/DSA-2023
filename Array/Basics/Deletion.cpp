#include <iostream>
using namespace std;

int main()
{
    int capacity = 10;
    int size = 5;

    int arr[capacity] = {10, 20, 30, 40, 50};

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int pos;
    cout << endl
         << "enter the positon where you want to delete data" << endl;
    cin >> pos;

    cout << "size :" << size << endl;

    for (int i = pos - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    for (int i = 0; i < capacity; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "size :" << size << endl;

    cout << endl;
}