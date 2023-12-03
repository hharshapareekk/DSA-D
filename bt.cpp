#include <bits/stdc++.h>
using namespace std;
/*1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1*/
class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

Node *buildTree(Node *root)
{
    cout << "ENTER DATA: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "ENTER DATA FOR INSERTING NODE IN LEFT OF " << data << endl;
    root->left = buildTree(root->left);
    cout << "ENTER DATA FOR INSERTING NODE IN RIGHT OF " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // jab bhi ek level end hoga tab
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL) // val tab he null hogi when ek level khatam hoga
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    Node *root = NULL;
    buildTree(root);
    levelOrderTraversal(root);

    return 0;
}