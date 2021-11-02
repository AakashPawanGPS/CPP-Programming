#include <bits/stdc++.h>
using namespace std;

struct myStack
{
    int cap;
    int *arr;
    int top;

    myStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        int res = arr[top];
        return res;
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    int c;
    cout << "Enter the Size of the Stack : ";
    cin >> c;
    myStack s(c);

    int choice;

    int r;

    while (true)
    {
        cout << "1 -> push" << endl
             << "2 -> pop" << endl
             << "3 -> peek" << endl
             << "4 -> isEmpty" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to be pushed : ";
            cin >> r;
            s.push(r);
            printf("%d is pushed\n", r);
            break;

        case 2:
            r = s.pop();
            printf("%d is popped\n", r);
            break;

        case 3:
            r = s.peek();
            printf("Top element is %d\n", r);
            break;

        case 4:
            if (s.isEmpty())
            {
                cout << "Stack is Empty\n";
            }
            else
            {
                cout << "Space left\n";
            }
            break;

        default:
            cout << "Enter valid case\n";
            break;
        }
    }

    return 0;
}