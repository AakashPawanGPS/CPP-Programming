#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n{};
    cin >> n;
    int arr[n][3];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < 3; j++)
    {
        x = 0;
        for (int i = 0; i < n; i++)
        {
            x += arr[i][j];
        }
        if (x != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}