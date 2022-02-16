#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n];
    int a2[n - 1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < n - 3; i++)
    {
        cin >> a2[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (a1[i] != a2[i - count])
        {
            cout << i << " ";
            count++;
        }
    }
    return 0;
}