#include <bits/stdc++.h>
using namespace std;

struct maxStack
{
    stack<int> s;
    int maxEle;

    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            maxEle = x;
        }
        else
        {
            if (x < maxEle)
                s.push(x);
            else
            {
                s.push(2 * x - maxEle);
                maxEle = x;
            }
        }
    }

    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            int t = s.top();
            if (t > maxEle)
            {
                maxEle = 2 * maxEle - t;
            }
            s.pop();
        }
    }

    void maximum()
    {
        if (s.empty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << maxEle << endl;
    }
};

int main()
{
    maxStack s;

    s.push(6);
    s.maximum();

    s.push(7);
    s.maximum();

    s.push(5);
    s.maximum();

    s.push(3);
    s.maximum();

    s.pop();
    s.maximum();

    s.pop();
    s.maximum();

    s.push(10);
    s.maximum();

    return 0;
}