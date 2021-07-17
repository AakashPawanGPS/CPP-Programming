#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution
{
public:
    void merge(int arr[], int l, int mid, int r)
    {
        int n1 = mid - l + 1;
        int a[n1];
        int n2 = r - mid;
        int b[n2];
        for (int i = 0; i < n1; i++)
        {
            a[i] = arr[l + i];
        }
        for (int i = 0; i < n2; i++)
        {
            b[i] = arr[mid + 1 + i];
        }
        int i = 0;
        int j = 0;
        int k = l;
        while (i < n1 and j < n2)
        {
            if (a[i] <= b[j])
            {
                arr[k] = a[i];
                i++;
                k++;
            }
            else
            {
                arr[k] = b[j];
                j++;
                k++;
            }
        }
        while (i < n1)
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        if (r > l)
        {
            int m = l + (r - l) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
};

int main()
{
    int n, T, i;

    scanf("%d", &T);

    while (T--)
    {

        scanf("%d", &n);
        int arr[n + 1];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;
        ob.mergeSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}