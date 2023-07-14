#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    //  Default contructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // perameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList() { head = NULL; }

    void insertNode(int);

    void deleteNode(int);

    void printList();
};

void LinkedList ::insertNode(int data)
{

    // creating new node
    Node *newNode;
    newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // traverse to end of the list;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void LinkedList ::deleteNode(int nodeOffset)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    Node *temp1, *temp2;

    int listLen = 0;
    temp1 = head;

    // calculate length of the list
    while (temp1 != NULL)
    {
        listLen++;
        temp1 = temp1->next;
    }
    cout << "list length " << listLen << endl;

    if (listLen < nodeOffset)
    {
        cout << "list offset is out of range " << endl;
        return;
    }

    temp1 = head;
    if (nodeOffset == 1)
    {
        head = NULL;
        delete temp1;
        return;
    }

    // stop at the one node before to be deleted

    //  temp2 is used as prev node
    // temp 1 is used for current node which have to be deleted
    // e.i. list is 10 20 30 40 50
    // here suppose 30 , have to be deleted
    //  20 is prev node (temp2)
    // 30 is current node (temp1)

    while (nodeOffset-- > 1)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    temp2->next = temp1->next;
    delete temp1;
}

void LinkedList ::printList()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;
    cout << "list : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    LinkedList list;

    list.printList();

    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);
    list.insertNode(50);

    list.printList();
    list.deleteNode(3);
    list.printList();
}