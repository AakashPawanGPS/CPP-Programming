#include <bits/stdc++.h>
using namespace std;

int AmazingTriplets(int n, vector<int> a)
{
    int res = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (k > j && j > i)
                    res = max(res, (a[i] + (a[j] * a[k])));
            }
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int res = AmazingTriplets(n, A);
        cout << res << "\n";
    }
    return 0;
}