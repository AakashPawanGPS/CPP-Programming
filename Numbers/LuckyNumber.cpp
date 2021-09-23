#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int rem;
    int luck = 0;
    while (n > 0)
    {
        rem = n % 10;
        if (rem == 4 || rem == 7)
        {
            luck++;
        }
        n /= 10;
    }
    if (luck == 4 || luck == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}