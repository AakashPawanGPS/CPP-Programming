#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lc = 0;
    int uc = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            uc++;
        else
            lc++;
    }
    if (uc > lc)
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]))
                s[i] -= 32;
        }
    else
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
                s[i] += 32;
        }
    cout << s;
    return 0;
}