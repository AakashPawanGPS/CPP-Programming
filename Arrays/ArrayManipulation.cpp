#include <bits/stdc++.h>
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries)
{
    vector<long> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < queries.size(); i++)
    {
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];

        for (int l = a; l <= b; l++)
        {
            arr[l] += k;
        }
    }
    long max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int x;
    cin >> x;
    int m;
    cin >> m;
    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int k;
            cin >> k;
            queries[i].push_back(k);
        }
    }

    long res = arrayManipulation(x, queries);
    cout << res;

    return 0;
}