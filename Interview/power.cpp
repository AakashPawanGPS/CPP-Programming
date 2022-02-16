#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, d;
    cin >> m >> n >> d;
    int t = m;
    for (int i = 1; i < n; i++)
    {
        t *= m;
    }
    cout << t << " ";
    int res = 0;
    while (--d)
    {
        t /= 10;
    }
    cout << t % 10;
    return 0;
}