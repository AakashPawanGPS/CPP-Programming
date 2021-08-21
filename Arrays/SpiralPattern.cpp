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
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// 17 18 19 20

//  1  2  3  4  5
//  6  7  8  9 10
// 11 12 13 14 15
// 16 17 18 19 20

// -1 2 6
// 5  8  9
//  4  1 0

// -126901458

// 0 0
// 0 -1
// -1 -1

// 00-1-1-10

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// 1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13
// 1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13
// 1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13
