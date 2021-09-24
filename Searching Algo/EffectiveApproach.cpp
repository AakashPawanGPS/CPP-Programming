#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int q;
    cin >> q;
    long long int query[q];
    for (long long int i = 0; i < q; i++)
    {
        cin >> query[i];
    }
    long long int v = 0, p = 0;
    for (long long int i = 0; i < q; i++)
    {
        long long int x = query[i];
        for (long long int j = 0; j < n; j++)
        {
            if (x == arr[j])
            {
                v += (j + 1);
                break;
            }
        }
        for (long long int j = n - 1; j >= 0; j--)
        {
            if (query[i] == arr[j])
                p += (n - j);
        }
    }
    printf("%I64d %I64d\n", v, p);
    return 0;
}