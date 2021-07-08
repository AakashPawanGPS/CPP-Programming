#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n)
{
    int i;
    int min_ind;
    for (i = 0; i < n - 1; i++)
    {
        min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(&arr[min_ind], &arr[i]);
    }
}

int main()
{
    int n = 6;
    int arr[] = {10, 5, 8, 20, 2, 18};

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}