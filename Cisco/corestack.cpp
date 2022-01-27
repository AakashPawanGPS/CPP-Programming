#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c = 1;
    int x;
    cout << a << " " << b << " " << c << " ";
    while (n--)
    {
        x = b + c;
        cout << x << " ";
        b = c;
        c = x;
    }
    // cout << x << " ";
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}