#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            steps++;
            n /= 2;
        }
        else
        {
            steps++;
            n -= 1;
        }
    }

    cout << steps;

    return 0;
}