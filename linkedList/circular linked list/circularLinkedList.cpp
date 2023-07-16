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

class CircularLinkedLIst
{
    Node *head;
    int ListLen = 0;

public:
    CircularLinkedLIst()
    {
        this->head = NULL;
    }

    void createList(int);
    void insertNode(int, int);
    void deleteNode(int);
    void printList();
};

void CircularLinkedLIst::createList(int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        ListLen++;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
        ListLen++;
    }
}
void CircularLinkedLIst::printList()
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }

    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl
         << ListLen << endl;
}
void CircularLinkedLIst::insertNode(int data, int nodeOffset)
{
    if (nodeOffset > ListLen)
    {
        cout << "out of range" << endl;
    }

    Node *newNode = new Node(data);
    Node *temp = head;
    while (nodeOffset - 1 > 1)
    {
        temp = temp->next;
        nodeOffset--;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    ListLen++;
}
void CircularLinkedLIst::deleteNode(int nodeOffset = -1)
{

    if (ListLen == 0)
    {
        cout << "list is empty" << endl;
    }

    Node *temp = head;
    if (ListLen == 1)
    {
        head = NULL;
        delete temp;
        ListLen--;
        return;
    }

    if (nodeOffset == 1)
    {
        Node *temp2;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp2 = head;

        head = head->next;
        temp->next = head;
        delete temp2;
        ListLen--;
        return;
    }

    if (ListLen == nodeOffset || nodeOffset == -1)
    {
        Node *temp2;
        while (temp->next != head)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = head;
        delete temp;
        ListLen--;
        return;
    }

    Node *temp2;
    while (nodeOffset > 1)
    {
        temp2 = temp;
        temp = temp->next;
        nodeOffset--;
    }
    temp2->next = temp->next;
    delete temp;
    ListLen--;
    return;
}

int main()
{
    CircularLinkedLIst list;
    list.createList(10);
    list.createList(20);
    list.createList(30);
    list.createList(40);
    list.createList(50);
    list.createList(60);

    list.printList();

    list.insertNode(25, 3);

    list.printList();

    list.deleteNode();
    list.printList();

    list.deleteNode(1);
    list.printList();

    list.deleteNode(3);
    list.printList();
}