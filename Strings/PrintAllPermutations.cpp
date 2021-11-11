#include <bits/stdc++.h>
using namespace std;

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *s, int l, int r)
{
    if (l == r)
    {
        cout << s << "\n";
    }
    else
    {
        for (int i = l; i < r; i++)
        {
            swap((s + l), (s + i));
            permute(s, l + 1, r);
            swap((s + l), (s + i));
        }
    }
}

int main()
{
    char s[] = "ABC";
    int n = strlen(s);
    permute(s, 0, n);

    return 0;
}