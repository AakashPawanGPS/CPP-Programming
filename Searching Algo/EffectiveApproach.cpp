#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int q;
    cin >> q;
    vector<int> query;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        query.push_back(x);
    }
    int v = 0, p = 0;
    for (int i = 0; i < q; i++)
    {
        int x = query[i];
        for (int j = 0; j < n; j++)
        {
            if (x == arr[j])
            {
                v += (j + 1);
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (query[i] == arr[j])
                p += (n - j);
        }
    }
    cout << v << " " << p;
    return 0;
}