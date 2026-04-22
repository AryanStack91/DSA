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
int main()
{

    queue<Node *> qu;
    int x;
    cout << "enter the root val :" << " -: ";
    cin >> x;
    Node *root = new Node(x);

    qu.push(root);

    while (!qu.empty())
    {

        Node *temp = qu.front();
        qu.pop();

        int first, second;
        cout << "enter the left child of :" << temp->data <<" -: ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new Node(first);
            qu.push(temp->left);
        }
        cout << "enter the right child of:" << temp->data<< " -: ";
        cin >> second;

        if (second != -1)
        {
            temp->right = new Node(second);
            qu.push(temp->right);
        }
    }
}