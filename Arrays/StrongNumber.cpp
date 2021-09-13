#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int rem;
    int sum = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + factorial(rem);
        temp = temp / 10;
    }
    if (sum == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}