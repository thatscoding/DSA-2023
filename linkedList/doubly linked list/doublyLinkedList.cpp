#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList
{
    Node *head;
    int listLen;

public:
    DoublyLinkedList()
    {
        this->head = NULL;
        this->listLen = 0;
    }
    void insertNode(int, int);
    void deleteNode(int);
    void printList();
};

void DoublyLinkedList::insertNode(int data, int nodeoffset = -1)
{
    Node *newNode = new Node(data);
    Node *temp = head;

    if (head == NULL)
    {
        head = newNode;
        listLen++;
        return;
    }

    if (nodeoffset == -1)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        listLen++;
        return;
    }

    if (nodeoffset > listLen)
    {
        cout << "Position is out of range :" << endl;
    }

    if (nodeoffset != -1)
    {
        temp = head;
        while (--nodeoffset > 1)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;

        listLen++;
        return;
    }
}
void DoublyLinkedList::printList()
{

    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "List Length : " << listLen << endl;
}

void DoublyLinkedList::deleteNode(int nodeOffset = -1)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }

    Node *temp = head;

    if (listLen == 1)
    {
        head = NULL;
        delete temp;
        listLen--;
    }

    if (nodeOffset == -1)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        listLen--;
        delete temp;
    }

    if (nodeOffset > -1)
    {
        while (nodeOffset > 1)
        {
            temp = temp->next;
            nodeOffset--;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        listLen--;
        delete temp;
    }
}

int main()
{
    DoublyLinkedList list;
    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);

    list.printList();

    // list.insertNode(25, 3);
    // list.printList();

    // list.insertNode(50);
    // list.printList();

    // list.deleteNode();
    // list.printList();

    // list.insertNode(50);
    // list.printList();

    list.deleteNode(2);
    list.printList();
}