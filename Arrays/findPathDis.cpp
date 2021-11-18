#include <bits/stdc++.h>
using namespace std;

int minSteps(int input1, int input2)
{
    int a = 1;
    int b = 1;
    int res = 0;
    while ((a + b == input1) && (b == input2) || (a == input1) && (a + b == input2))
    {
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int res = minSteps(a, b);
    cout << res;
    return 0;
}