#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[], int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];
    for (int i = 0; i < i + m - 1; i++)
    {
        res = min(res, arr[i + m - 1] - arr[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int res = minDiff(arr, n, m);
    cout << res;

    return 0;
}