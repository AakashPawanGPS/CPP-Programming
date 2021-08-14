#include <bits/stdc++.h>
using namespace std;

void StockBuyandSell(int arr[], int n)
{
    if (n == 1)
        return;
    int i = 0;
    while (i < n - 1)
    {
        while (i < n - 1 && arr[i + 1] <= arr[i])
        {
            i++;
        }
        if (i == n - 1)
            break;
        int buy = i++;

        while (i < n && arr[i] >= arr[i - 1])
            i++;
        int sell = i - 1;

        cout << "[" << (buy + 1) << "," << (sell + 1) << "]" << endl;
    }
}

int main()
{
    int arr[] = {23, 13, 29, 33, 1, 0, 10};
    int n = 7;
    StockBuyandSell(arr, n);
    return 0;
}