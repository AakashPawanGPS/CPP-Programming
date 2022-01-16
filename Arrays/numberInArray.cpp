#include <bits/stdc++.h>
using namespace std;

bool isPresent(int a, int m)
{
    while (a != 0)
    {
        if (a == m)
            return true;
        a /= 10;
    }
    return false;
}

void solve(int n, int arr[], int m)
{
    for (int i = 0; i < n; i++)
    {
        if (isPresent(arr[i],m))
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    solve(n, arr, m);
    return 0;
}