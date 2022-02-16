#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int l, int r)
{
    int temp;
    while (l <= r)
    {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

void rotate(int arr[], int n, int x)
{

    reverse(arr, 0, n - 1);
    reverse(arr, 0, x - 1);
    reverse(arr, x, n - 1);
}


int main()
{
    int arr[5] = {5, 6, 7, 8, 9};
    rotate(arr, 5, 1);
    for (int i : arr)
        cout << i << " ";
    return 0;
}