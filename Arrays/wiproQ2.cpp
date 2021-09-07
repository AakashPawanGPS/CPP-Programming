#include <bits/stdc++.h>
using namespace std;

int min(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < a && b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int result = 0;
    int a, b, c, d;

    d = max(num1 % 10, num2 % 10, num3 % 10);
    num1 /= 10;
    num2 /= 10;
    num3 /= 10;
    c = min(num1 % 10, num2 % 10, num3 % 10) * 10;
    num1 /= 10;
    num2 /= 10;
    num3 /= 10;
    b = max(num1 % 10, num2 % 10, num3 % 10) * 100;
    num1 /= 10;
    num2 /= 10;
    num3 /= 10;
    a = min(num1 % 10, num2 % 10, num3 % 10) * 1000;

    result = a + b + c + d;
    cout << result;
    return 0;
}