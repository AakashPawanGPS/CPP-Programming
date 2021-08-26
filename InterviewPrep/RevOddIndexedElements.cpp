/*
Input : 8
        1 2 3 4 5 6 7 8
Output : 1 8 3 6 5 4 7 2
Explanation : Reverse Odd indexed elements
*/

#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int *temp;
    temp = x;
    x = y;
    y = temp;
}

void RevOddIndex(int arr[], int n)
{
    int j = 0;
    int i = 1;
    if (n % 2 == 0)
    {
        j = n - 1;
    }
    else
    {
        j = n - 2;
    }
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i += 2;
        j -= 2;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    RevOddIndex(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}