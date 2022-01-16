#include <bits/stdc++.h>
using namespace std;

int maximum(int n, int k, int a[])
{
    int res = 0;
    for (int i=0; i<k; i++)
       res += a[i];
 
    int curr_sum = res;
    for (int i=k; i<n; i++)
    {
       curr_sum += a[i] - a[i-k];
       res = max(res, curr_sum);
    }
 
    return res;
}

int main()
{
    int a[] = {5, 6, 2, 1, 8, 9, 7};
    int r = maximum(7, 3, a);
    cout << r;
    return 0;
}