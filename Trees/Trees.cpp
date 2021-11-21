#include <bits/stdc++.h>
#include <vector>
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

void iterativePreorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    s.push(root);
    while (!s.empty())
    {
        Node *curr = s.top();
        s.pop();
        cout << curr->data << " ";
        if (curr->right)
            s.push(curr->right);
        if (curr->left)
            s.push(curr->left);
    }
}

void iterativeInorder(Node *root)
{
    if (root == NULL)
        return;
    Node *curr = root;
    stack<Node *> s;
    while (true)
    {
        if (curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            if (s.empty())
                break;
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

void iterativePostorder(Node *root)
{
    if (root == NULL)
        return;
    Node *curr = root;
    stack<Node *> s;
    while (curr || !s.empty())
    {
        if (curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            Node *temp = s.top()->right;
            if (temp == NULL)
            {
                temp = s.top();
                s.pop();
                cout << temp->data << " ";
                while (!s.empty() && temp == s.top()->right)
                {
                    temp = s.top();
                    s.pop();
                    cout << temp->data << " ";
                }
            }
            else
                curr = temp;
        }
    }
}

int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

void NodesKDist(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << (root->data) << " ";
    else
    {
        NodesKDist(root->left, k - 1);
        NodesKDist(root->right, k - 1);
    }
}

void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    cout << endl;
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

int sizeOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
    }
}

int getMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
    {
        return max(root->data, max(getMax(root->left), getMax(root->right)));
    }
}

bool isChildSum(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->data;
    if (root->right != NULL)
        sum += root->right->data;
    return (sum == root->data &&
            isChildSum(root->left) &&
            isChildSum(root->right));
}

int isBalanced(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = isBalanced(root->left);
    if (lh == -1)
        return -1;
    int rh = isBalanced(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh - rh) > 1)
        return -1;
    else
    {
        return max(lh, rh) + 1;
    }
}

int maxWidth(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int res = 0;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        res = max(res, count);
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return res;
}

Node *pre = NULL;
Node *BTtoDLL(Node *root)
{
    if (root == NULL)
        return root;
    Node *head = BTtoDLL(root->left);
    if (pre == NULL)
        head = root;
    else
    {
        root->left = pre;
        pre->right = root;
    }
    pre = root;
    BTtoDLL(root->right);

    return head;
}

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->right;
    }
}

int preIndex = 0;
Node *cTree(int in[], int pr[], int is, int ie, map<int, int> mp)
{
    if (is > ie)
        return NULL;
    Node *root = new Node(pr[preIndex++]);
    int inIndex;
    // for (int i = is; i <= ie; i++)
    // {
    //     if (in[i] == root->data)
    //     {
    //         inIndex = i;
    //         break;
    //     }
    // }
    inIndex = mp[root->data];
    root->left = cTree(in, pr, is, inIndex - 1, mp);
    root->right = cTree(in, pr, inIndex + 1, ie, mp);

    return root;
}

void spiralTreeTraversal(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s1;
    stack<Node *> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            Node *curr = s1.top();
            s1.pop();
            cout << curr->data << " ";
            if (curr->left)
                s2.push(curr->left);
            if (curr->right)
                s2.push(curr->right);
        }
        while (!s2.empty())
        {
            Node *curr = s2.top();
            s2.pop();
            cout << curr->data << " ";
            if (curr->right)
                s1.push(curr->right);
            if (curr->left)
                s1.push(curr->left);
        }
    }
}

void ZigZagTraversal(Node *root)
{
    if (root == NULL)
        return;
    vector<vector<int>> res;
    queue<Node *> q;
    q.push(root);
    bool flag = false;
    while (!q.empty())
    {
        vector<int> v;
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            v.push_back(curr->data);
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        if (flag)
        {
            reverse(v.begin(), v.end());
        }
        res.push_back(v);
        flag = !flag;
    }
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int diaHelper(Node *root, int &res)
{
    if (root == NULL)
        return 0;
    int lh = diaHelper(root->left, res);
    int rh = diaHelper(root->right, res);
    int height = 1 + max(lh, rh);
    res = max(res, 1 + lh + rh);
    return height;
}

int diameter(Node *root)
{
    int res = 0;
    diaHelper(root, res);
    return res;
}

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *lca1 = LCA(root->left, n1, n2);
    Node *lca2 = LCA(root->right, n1, n2);
    if (lca1 != NULL && lca2 != NULL)
        return root;
    if (lca1)
        return lca1;
    else
        return lca2;
}

void mirrorTree(Node *root)
{
    if (root == NULL)
        return;
    else
    {
        Node *temp = NULL;
        mirrorTree(root->left);
        mirrorTree(root->right);
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}

void topView(Node *root)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    map<int, int> m;
    q.push({root, 0});
    while (!q.empty())
    {
        Node *curr = q.front().first;
        int dis = q.front().second;
        q.pop();

        if (m.count(dis) == 0)
            m[dis] = curr->data;

        if (curr->left)
            q.push({curr->left, dis - 1});
        if (curr->right)
            q.push({curr->right, dis + 1});
    }
    for (auto i : m)
    {
        cout << i.second << " ";
    }
}

void bottomView(Node *root)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    map<int, int> m;
    q.push({root, 0});
    while (!q.empty())
    {
        Node *curr = q.front().first;
        int dis = q.front().second;
        q.pop();

        m[dis] = curr->data;

        if (curr->left)
            q.push({curr->left, dis - 1});
        if (curr->right)
            q.push({curr->right, dis + 1});
    }
    for (auto i : m)
    {
        cout << i.second << " ";
    }
}

int burnTime(Node *root, int leaf, int &dis, int &res)
{
    if (root == NULL)
        return 0;
    if (root->data == leaf)
    {
        dis = 0;
        return 1;
    }
    int ldis = -1;
    int rdis = -1;
    int lh = burnTime(root->left, leaf, ldis, res);
    int rh = burnTime(root->right, leaf, rdis, res);
    if (ldis != -1)
    {
        dis = ldis + 1;
        res = max(res, dis + rh);
    }
    else if (rdis != -1)
    {
        dis = rdis + 1;
        res = max(res, dis + lh);
    }

    return max(lh, rh) + 1;
}

int SizeOfCompleteTree(Node *root)
{
    int lh = 0;
    int rh = 0;
    Node *curr = root;
    while (curr != NULL)
    {
        lh++;
        curr = curr->left;
    }
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
        return pow(2, lh) - 1;
    else
    {
        return 1 + SizeOfCompleteTree(root->left) + SizeOfCompleteTree(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);

    // iterativePreorder(root);
    // iterativeInorder(root);
    iterativePostorder(root);

    // int h = height(root);
    // cout << h << " ";

    // NodesKDist(root, 3);
    // for (int i : Kdist)
    //     cout << i << " ";

    // levelOrder(root);
    // levelOrderLineByLine(root);

    // int s = sizeOfTree(root);
    // cout << s;

    // int maxNode = getMax(root);
    // cout << maxNode << " ";

    // bool ChildSum = isChildSum(root);
    // cout << ChildSum << " ";

    // int balanced = isBalanced(root);
    // if (balanced != -1)
    //     cout << "Balanced";
    // else
    // {
    //     cout << "Unbalanced";
    // }

    // int width = maxWidth(root);
    // cout << width;

    // Node *head = BTtoDLL(root);
    // printDLL(head);

    // int in[] = {40, 20, 60, 50, 70, 10, 80, 100, 30};
    // int pr[] = {10, 20, 40, 50, 60, 70, 30, 80, 100};

    // int n = sizeof(in) / sizeof(in[0]) - 1;
    // map<int, int> mp;
    // for (int i = 0; i <= n; i++)
    // {
    //     mp[in[i]] = i;
    // }
    // Node *Tree = cTree(in, pr, 0, n, mp);
    // levelOrderLineByLine(root);

    // spiralTreeTraversal(root);
    // ZigZagTraversal(root);

    // int res = 0;
    // diameter(root, res);
    // cout << res << " ";

    // Node *lca = LCA(root, 2, 7);
    // cout << lca->data;

    // mirrorTree(root);
    // levelOrderLineByLine(root);

    // topView(root);
    // cout << endl;
    // bottomView(root);
    // int res = 0;
    // int dis = 0;
    // int leaf = 60;
    // int bTime = burnTime(root, leaf, dis, res);
    // cout << res << " ";

    // int countNodes = SizeOfCompleteTree(root);
    // cout << countNodes;

    return 0;
}