#include <bits/stdc++.h>
using namespace std;

int main()
{

    long int rows, cols;
    cin >> rows >> cols;
    long long int arr[rows][cols];
    for (long int i = 0; i < rows; i++)
    {
        for (long int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    long int rowmax = 0;
    long int colmax = 0;

    while (rowmax < rows && colmax < cols)
    {
        for (long int i = colmax; i < cols; i++)
        {
            cout << arr[rowmax][i] << " ";
        }
        rowmax++;
        for (long int i = rowmax; i < rows; i++)
        {
            cout << arr[i][cols - 1] << " ";
        }
        cols--;
        if (rowmax < rows)
        {
            for (long int i = cols - 1; i >= rowmax - 1; --i)
            {
                cout << arr[rows - 1][i] << " ";
            }
            rows--;
        }
        if (colmax < cols)
        {
            for (long int i = rows - 1; i >= rowmax; --i)
            {
                cout << arr[i][colmax] << " ";
            }
            colmax++;
        }
    }
    return 0;
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
