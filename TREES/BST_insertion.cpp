#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertintoBST(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertintoBST(root->right, data);
    }
    else
    {
        root->left = insertintoBST(root->left, data);
    }

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertintoBST(root, data); // no need to assign again
        cin >> data;
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node *root, int key)
{
    if (root == nullptr)
        return false;

    if (root->data == key)
    {
        return true;
    }
    if (root->data < key)
    {
        search(root->right, key);
    }
    else
    {
        search(root->left, key);
    }
}
int main()
{
    Node *root = NULL;

    cout << "Enter data (-1 to stop): ";
    takeInput(root);

    cout << "Inorder Traversal: " << endl;
    inorder(root);

    int key;
    cout << endl
         << " enter the element to search :";
    cin >> key;

    bool ans = search(root, key);
    cout << ans;

    return 0;
}