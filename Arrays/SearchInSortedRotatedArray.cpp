#include <bits/stdc++.h>
using namespace std;

int SearchSortedRotate(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
            return mid;
        if (arr[low] < arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (x > arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n = 7;
    int arr[n] = {4, 5, 6, 7, 1, 2, 3};
    int key = 6;
    int idx = SearchSortedRotate(arr, n, key);
    cout << idx;
    return 0;
}