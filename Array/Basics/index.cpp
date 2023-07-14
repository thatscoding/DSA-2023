#include <iostream>
using namespace std;
int e = 0;
int arr[50] = {0};

void printArray()
{
    for (int i = 0; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "size of array " << e << endl;
}

void insertDataWithPos(int data, int pos)
{
    for (int i = e - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = data;
    e++;
}

void insertData(int data)
{
    if (e == 50)
    {
        cout << "Overflow" << endl;
        return;
    }
    arr[e] = data;
    e++;
}

void deleteData(int pos)
{
    if (e == 0)
    {
        cout << "array is empty" << endl;
    }

    for (int i = pos - 1; i < e - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    e--;
}

int main()
{
    insertData(10);
    insertData(20);
    insertData(30);
    insertData(40);
    insertData(50);

    insertDataWithPos(35, 4);
    printArray();

    deleteData(3);
    printArray();
}