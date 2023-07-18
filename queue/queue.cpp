#include <iostream>
using namespace std;
#define N 10
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (rear == N - 1)
    {
        cout << "queue overflow" << endl;
        return;
    }
    if (rear == -1 && front == -1)
    {
        front = rear = 0;
        queue[rear] = data;
        cout << queue[rear] << " ";
        return;
    }

    ++rear;
    queue[rear] = data;
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "queue underflow" << endl;
        return;
    }
    if (rear == front)
    {
        front - 1;
        rear = -1;
        return;
    }

    cout << "element deleted " << queue[front] << endl;
    front++;
}
void display()
{
    for (int i = front; i < rear; i++)
    {
        cout << queue[i] << " ";
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();
    dequeue();
    display();
}