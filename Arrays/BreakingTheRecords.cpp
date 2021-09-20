#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int p = arr[0];
    int minTrans = 0;
    int maxTrans = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > p)
        {
            maxTrans++;
            p = arr[i];
        }
    }

    p = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < p)
        {
            minTrans++;
            p = arr[i];
        }
    }

    cout << maxTrans << " " << minTrans;
    return 0;
}