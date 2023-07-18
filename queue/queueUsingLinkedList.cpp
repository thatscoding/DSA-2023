#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        this->front = NULL;
        this->rear = NULL;
    }

    void dequeue();
    void enqueue(int);
    void display();
};

void Queue::enqueue(int data)
{
    Node *newNode = new Node(data);
    if (rear == NULL && front == NULL)
    {
        rear = front = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void Queue::dequeue()
{
    if (front == NULL && rear == NULL)
    {
        cout << "queue underflow" << endl;
        return;
    }

    if (rear == front)
    {
        rear = NULL;
        front = NULL;
        return;
    }

    front = front->next;
}

void Queue::display()
{
    if (front == NULL && rear == NULL)
    {
        cout << "queue underflow" << endl;
    }
    Node *temp = front;
    while (temp != rear)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " " << endl;
}

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();

    q.display();
}