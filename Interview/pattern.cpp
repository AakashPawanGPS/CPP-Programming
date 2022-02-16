#include <bits/stdc++.h>
using namespace std;

string encode(string str)
{

    int n = str.length();
    string res = "";
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        if (count > 1)
        {
            res += str[i] + to_string(count);
        }
        else
        {
            res += str[i];
        }
    }
    return res;
}

string compress(string str)
{
    string res = "";
    res += str[0];
    for (int i = 1; i < str.size(); i++)
    {
        int count = 0;
        while (str[i] - str[i - 1] == 1)
        {
            i++;
            count++;
        }
        if (count > 1)
        {
            res += "-";
            res += str[i - 1];
        }
        else
        {
            i -= count;
            res += str[i];
        }
    }
    return res;
}

int main()
{

    string str;
    cin >> str;

    string res = encode(str);
    res = compress(res);
    cout << res;
    return 0;
}