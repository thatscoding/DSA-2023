#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node()
    {
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Btree
{
    Node *root;

public:
    Btree()
    {
        this->root = NULL;
    }
    int createNode();
    void deleteNode();
    void inOrder();
    void preOrder();
    void postOrder();
};

int Btree::createNode()
{
    int x;
    cout << "Enter the data , (for exiting enter -1)" << endl;
    cin >> x;
    Node *newNode = new Node(x);

    if (x == -1)
    {
        return NULL;
    }
}

int main()
{
}