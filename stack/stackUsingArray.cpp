#include <iostream>
using namespace std;
#define MAX 10

class Stack
{
    int top;

public:
    int arr[MAX];
    Stack() { this->top = -1; }

    void push(int);
    int pop();
    void peek();
    void display();
};

void Stack::push(int data)
{
    if (top >= MAX - 1)
    {
        cout << "Stack overflow" << endl;
        return;
    }

    arr[++top] = data;
}

int Stack::pop()
{
    if (top == -1)
    {
        cout << "stack underflow" << endl;
        return top = -1;
    }
    if (top == 0)
    {
        top = -1;
        return arr[top];
    }

    int x = arr[top];
    top--;
    return x;
}

void Stack::display()
{
    if (top == -1)
    {
        cout << "stack underflow" << endl;
    }
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Stack::peek()
{
    if (top == -1)
    {
        cout << "stack underflow" << endl;
        return;
    }
    cout << "Peek : " << arr[top] << endl;
}

int main()
{
    Stack a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    a.push(70);
    a.push(80);
    a.push(90);
    a.push(100);
    a.push(110);
    // a.push(50);
    // a.push(50);

    a.display();

    cout << a.pop() << endl;

    a.display();
    a.peek();
}