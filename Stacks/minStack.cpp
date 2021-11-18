#include <bits/stdc++.h>
using namespace std;

struct minStack
{
    stack<int> s;
    int minEle;

    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            minEle = x;
        }
        else
        {
            if (x > minEle)
                s.push(x);
            else
            {
                s.push(2 * x - minEle);
                minEle = x;
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
            if (t < minEle)
            {
                minEle = 2 * minEle - t;
            }
            s.pop();
        }
    }

    void minimum()
    {
        if (s.empty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << minEle << endl;
    }
};

int main()
{
    minStack s;

    s.push(6);
    s.minimum();

    s.push(7);
    s.minimum();

    s.push(5);
    s.minimum();

    s.push(3);
    s.minimum();

    s.pop();
    s.minimum();

    s.pop();
    s.minimum();

    return 0;
}