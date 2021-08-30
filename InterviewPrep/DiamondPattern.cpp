/*
                1
            2   2   2
        3   2   5   2   3
    4   3   2   9   2   3   4
5   4   3   2   14  2   3   4   5
    4   3   1   9   2   3   4
        3   2   5   2   3
            2   2   2
                1                  */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int center = 0;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (j != 1)
            {
                cout << j << " ";
                center += j;
            }
            else
            {
                if (i == 1)
                {
                    cout << i << " ";
                }
                else
                {
                    cout << center << " ";
                }
            }
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    for (int i = n - 1; i >= 1; i--)
    {
        int center = 0;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (j != 1)
            {
                cout << j << " ";
                center += j;
            }
            else
            {
                if (i == 1)
                {
                    cout << i << " ";
                }
                else
                {
                    cout << center << " ";
                }
            }
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
