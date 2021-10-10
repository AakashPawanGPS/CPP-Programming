#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int Y;
    cin >> N >> Y;
    int arr[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int i = 0; i < N - 2; i++)
    {
        sum += arr[i];
    }
    for (int i = N - 2; i < N; i++)
    {
        sum += min(arr[i], Y);
    }
    cout << sum;
    return 0;
}