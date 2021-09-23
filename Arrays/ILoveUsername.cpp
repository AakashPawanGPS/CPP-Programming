#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    int maxCount = 0;
    int minCount = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            maxCount++;
            max = arr[i];
        }
        if (arr[i] < min)
        {
            minCount++;
            min = arr[i];
        }
    }
    cout << minCount + maxCount;
    return 0;
}