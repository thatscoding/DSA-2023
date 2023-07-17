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

class Stack
{
    Node *top;
    int Listlen;

public:
    Stack()
    {
        this->top = NULL;
        Listlen = 0;
    }

    void push(int);
    int pop();
    void peek();
    void display();
};

void Stack::push(int data)
{
    Node *newNode = new Node(data);
    if (top == NULL)
    {
        top = newNode;
        Listlen++;
    }
    else
    {
        newNode->next = top;
        top = newNode;
        Listlen++;
    }
}

int Stack::pop()
{
    if (top == NULL)
    {
        cout << "stack Underflow" << endl;
        return -1;
    }
    Node *temp = top;
    if (Listlen == 1)
    {
        top = NULL;
        delete temp;
        Listlen--;
        return -1;
    }

    int x = top->data;
    top = top->next;
    Listlen--;
    delete temp;
    return x;
}

void Stack::peek()
{
    if (top == NULL)
    {
        cout << "stack underflow" << endl;
        return;
    }
    cout << "peek : " << top->data << endl;
}

void Stack::display()
{
    if (top == NULL)
    {
        cout << "stack underflow" << endl;
        return;
    }
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << " list length : " << Listlen << endl;
}

int main()
{
    Stack list;
    list.push(10);
    list.push(20);
    list.push(30);
    list.push(40);
    list.push(50);
    list.push(60);
    list.display();

    cout << "pop : " << list.pop() << endl;
    list.display();

    list.peek();
}