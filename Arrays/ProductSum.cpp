#include <bits/stdc++.h>
using namespace std;

int findNum(vector<int> arr)
{

    int n = arr.size();
    if (n == 1)
        return -1;
    int num = arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] * arr[i] == num)
            return i + 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = findNum(arr);
    cout << res;
    return 0;
}