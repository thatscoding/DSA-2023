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

Node *create()
{
    int x;
    cout << "enter the data : you wnant to exit enter -1" << endl;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *newNode = new Node(x);

    cout << "enter the left child of " << x << endl;
    newNode->left = create();

    cout << "enter the right child of " << x << endl;
    newNode->right = create();

    return newNode;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    root = create();

    cout << endl
         << "InOrder traversal :" << endl;
    inOrder(root);
    cout << endl
         << "Pre Order Traversal " << endl;
    preOrder(root);
    cout << endl
         << "Post Order Traversal " << endl;
    postOrder(root);
}
