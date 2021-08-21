#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int top = 0;
    int left = 0;
    int bottom = r - 1;
    int right = c - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}
