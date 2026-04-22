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

void level_order(Node *root)
{

    if (root == nullptr)
        return;

    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        cout<<temp->data << " ";

        if (temp->left != nullptr)
            qu.push(temp->left);
        if (temp->right != nullptr)
            qu.push(temp->right);
    }
    
}
int main()
{

    cout << " enter the root node :";
    Node *root;
    root = BinaryTree();

    level_order(root);
}
