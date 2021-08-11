#include <bits/stdc++.h>
using namespace std;

void CycleSort(int arr[], int n)
{
    for (int cs = 0; cs < n - 1; cs++)
    {
        int pos = cs;
        int item = arr[cs];
        for (int i = cs + 1; i < n; i++)
        {
            if (arr[i] < item)
                pos++;
        }
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                    pos++;
            }
            swap(item, arr[pos]);
        }
    }
}

int main()
{
    int arr[] = {7, 1, 5, 2, 9, 6, 8};
    int n = 7;

    CycleSort(arr, n);
    for (int i : arr)
        cout << i << " ";
    return 0;
}