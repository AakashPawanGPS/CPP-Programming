/*
Input : 5
Output :        0
            1   0   1
        2   1   0   1   2
    3   2   1   0   1   2   3
4   3   2   1   0   1   2   3   4
*/

#include <bits/stdc++.h>
using namespace std;

void printPyramid(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= -1; k--)
        {
            if (k >= 0)
            {
                cout << k << " ";
            }
            else
            {
                cout << abs(k) << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    //printPyramid(n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int k = i; k >= -1; k--)
            if (k >= 0)
                cout << k << " ";
            else
                cout << abs(k) << " ";
        cout << endl;
    }
    return 0;
}