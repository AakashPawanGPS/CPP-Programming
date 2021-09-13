#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "0";
        return 0;
    }
    int arr[n];
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i - 2] + 7;
        }
        else
        {
            arr[i] = arr[i - 2] + 6;
        }
    }
    cout << arr[n - 1];

    return 0;
}