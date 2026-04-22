#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

public:
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

Node *BinaryTree()
{

    int x;
    cin >> x;
    if (x == -1)
        return nullptr;

    Node *temp = new Node(x);

    cout << "Enter the left child" << x << " :";
    temp->left = BinaryTree();

    cout << "Enter  the right child " << " :";
    temp->right = BinaryTree();

    return temp;
}
int main()
{


    cout << " Enter the root node :";

    Node* root;

    root = BinaryTree();
}