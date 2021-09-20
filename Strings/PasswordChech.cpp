#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string num = "0123456789";
    string l_c = "abcdefghijklmnopqrstuvwxyz";
    string u_s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s_s = "!@#$%^&*()-+";

    int num_count = 0;
    int l_count = 0;
    int u_count = 0;
    int s_count = 0;

    int n;
    cin >> n;
    char arr[n];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (isdigit(arr[i]))
        {
            num_count++;
        }
        else if (isupper(arr[i]))
        {
            u_count++;
        }
        else if (islower(arr[i]))
        {
            l_count++;
        }
        else
        {
            s_count++;
        }
    }
    if (num_count == 0)
    {
        res++;
    }
    if (l_count == 0)
    {
        res++;
    }
    if (u_count == 0)
    {
        res++;
    }
    if (s_count == 0)
    {
        res++;
    }
    if (n + res >= 6)
    {
        cout << res;
    }
    else
    {
        while (n + res < 6)
        {
            res++;
        }
        cout << res;
    }
}
