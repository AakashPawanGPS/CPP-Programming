
#include <bits/stdc++.h>

using namespace std;

void solveGame(vector<vector<int>> &arr)
{
    int n = arr.size();
    vector<int> row_max;
    vector<int> col_max;

    for (int i = 0; i < n; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
        row_max.push_back(max);
    }

    for (int i = 0; i < n; i++)
    {
        int max = arr[0][i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] > max)
                max = arr[j][i];
        }
        col_max.push_back(max);
    }

    for (int a = 0; a < n; a++)
    {
        int x = row_max[a] & col_max[a];
        cout << x << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    solveGame(arr);
    return 0;
}
