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
    int pre_sum[n];
    pre_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + arr[i];
    }
    // for (int i : pre_sum)
    //     cout << i << " ";
    int sum = 22;
    unordered_set<int> s;
    for (int i = 1; i < n; i++)
    {
        if (pre_sum[i] == sum)
        {
            cout << "YES";
            return 0;
        }
        if (s.find(pre_sum[i] - sum) != s.end())
        {
            cout << "YES";
            return 0;
        }
        s.insert(pre_sum[i]);
    }
    cout << "NO";

    return 0;
}