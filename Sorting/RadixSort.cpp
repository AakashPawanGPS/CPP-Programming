#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int exp)
{
    int count[10];
    int output[n];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void RadixSort(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
    }
}

int main()
{
    int arr[] = {27, 121, 55, 243, 97, 173, 60, 8, 1114};
    int n = 9;
    RadixSort(arr, n);
    for (int i : arr)
        cout << i << " ";
    return 0;
}