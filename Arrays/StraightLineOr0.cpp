#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
    }
    int p = (arr[3] - arr[1]) / (arr[2] - arr[0]);
    int q = (arr[5] - arr[3]) / (arr[4] - arr[2]);

    string res;
    if (p == q)
    {
        res = to_string(arr[2] - arr[0]) + "x-" + to_string(arr[3] - arr[1]) + "y=0";
        cout << res;
    }
    else
    {
        cout << "0";
    }
    return 0;
}