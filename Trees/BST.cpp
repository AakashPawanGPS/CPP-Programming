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

bool search(Node *root, int x) // Search In BST
{
    if (root == NULL)
        return false;
    else if (root->data == x)
        return true;
    else if (root->data > x)
        return search(root->left, x);
    else
        return search(root->right, x);
}

Node *insert(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    else if (root->data > x)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}

Node *getSucc(Node *root)
{
    Node *curr = root->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node *deleteNode(Node *root, int x)
{
    if (root == NULL)
        return NULL;
    if (x < root->data)
        root->left = deleteNode(root->left, x);
    else if (x > root->data)
        root->right = deleteNode(root->right, x);
    else
    {
        if (root->left == NULL)
            return root->right;
        else if (root->right == NULL)
            return root->left;
        else
        {
            Node *succ = getSucc(root);
            root->data = succ->data;
            root->right = deleteNode(root->right, succ->data);
        }
        return root;
    }
    return root;
}

Node *floor(Node *root, int x)
{
    Node *res = NULL;
    while (root)
    {
        if (root->data == x)
            return root;
        else if (x < root->data)
        {
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}

Node *ceil(Node *root, int x)
{
    Node *res = NULL;
    while (root)
    {
        if (root->data == x)
            return root;
        else if (x > root->data)
        {
            root = root->right;
        }
        else
        {
            res = root;
            root = root->left;
        }
    }
    return res;
}

void levelOrderLineByLine(Node *root)
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
            cout << curr->data << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << "\n";
    }
}

bool isBST(Node *root, int min, int max)
{
    if (root == NULL)
        return true;
    return (root->data > min && root->data < max && isBST(root->left, min, root->data) && isBST(root->right, root->data, max));
}

void ceilOnLeftSide(int arr[])
{
    set<int> s;
    s.insert(arr[0]);
    for (int i = 1; i < 6; i++)
    {
        auto c = s.lower_bound(arr[i]);
        if (c != s.end())
            cout << *c << " ";
        else
        {
            cout << "-1"
                 << " ";
        }
        s.insert(arr[i]);
    }
}

Node *pre = NULL;
Node *first = NULL;
Node *second = NULL;

void fixBSTSwapTwo(Node *root)
{
    if (root == NULL)
        return;
    fixBSTSwapTwo(root->left);
    if (pre && root->data < pre->data)
    {
        if (first == NULL)
            first = pre;
        second = root;
    }
    pre = root;
    fixBSTSwapTwo(root->right);
}

int main()
{

    Node *root = new Node(50);
    root->left = new Node(30);
    root->left->right = new Node(70);
    root->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);
    // root->right->left->left = new Node(16);
    // cout << search(root, 90);
    // root = insert(root, 1);
    // root = insert(root, 54);
    // root = insert(root, 14);
    // levelOrderLineByLine(root);
    // cout << "\n\n";
    // root = deleteNode(root, 70);

    // levelOrderLineByLine(root);

    // Node *res = floor(root, 75);
    // cout << res->data << " ";

    // res = ceil(root, 25);
    // cout << res->data << " ";

    // bool bst = isBST(root, INT_MIN, INT_MAX);
    // cout << bst << " ";

    // int arr[] = {2, 8, 30, 15, 25, 12};
    // ceilOnLeftSide(arr);

    fixBSTSwapTwo(root);
    int temp = first->data;
    first->data = second->data;
    second->data = temp;
    levelOrderLineByLine(root);

    return 0;
}