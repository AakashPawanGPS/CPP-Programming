#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int count = 1;
    int i = 0;
    int j;
    for (j = 0; j < n; j++)
    {
        arr[i][j] = count;
        count++;
    }
    j = n - 1;
    for (int i = 1; i < n; i++)
    {
        arr[i][j] = count;
        count++;
    }
    i = n - 1;
    for (int j = n - 2; j >= 0; j--)
    {
        arr[i][j] = count;
        count++;
    }
    j = 0;
    for (int i = n - 2; i >= 1; i--)
    {
        arr[i][j] = count;
        count++;
    }
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; j < n; l++)
        {
            cout << arr[k][l] << " ";
        }
        cout << endl;
    }
    return 0;
}