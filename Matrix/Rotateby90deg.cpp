#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i + 1; j < matrix.size(); j++)
        {
            swap(matrix[j][i], matrix[i][j]);
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        int low = 0;
        int high = matrix.size() - 1;
        while (low <= high)
        {
            swap(matrix[low][i], matrix[high][i]);
            low++;
            high--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n);
        for (int i = 0; i < n; i++)
        {
            matrix[i].resize(n);
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}
