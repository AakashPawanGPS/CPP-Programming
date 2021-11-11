#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void leftView(Node *root, vector<int> &leftArr)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
                leftArr.push_back(curr->data);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}
void rightView(Node *root, vector<int> &rightArr)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == count - 1)
                rightArr.push_back(curr->data);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}

int main()
{
    vector<int> leftArr;
    vector<int> rightArr;
    vector<int> Arr;
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    leftView(root->left, leftArr);
    rightView(root, rightArr);
    reverse(leftArr.begin(), leftArr.end());

    for (int i : leftArr)
        Arr.push_back(i);
    for (int i : rightArr)
        Arr.push_back(i);

    for (int i : Arr)
        cout << i << " ";

    return 0;
}