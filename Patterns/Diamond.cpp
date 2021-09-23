#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int k = (n + 1) / 2;
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - j; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;*/
    k = (n + 1) / 2;

    for (int i = 0; i < k - 1; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < ((2 * i) + 1); i++)
    {
        cout << "*";
    }
    k--;
}