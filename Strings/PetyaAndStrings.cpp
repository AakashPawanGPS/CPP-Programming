#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        a[i] = toupper(a[i]);
        b[i] = toupper(b[i]);
    }
    if (a != b)
    {
        if (a > b)
        {
            cout << "1";
        }
        else
        {
            cout << "-1";
        }
    }
    else
    {
        cout << "0";
    }
    return 0;
}