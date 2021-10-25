#include <bits/stdc++.h>
using namespace std;

void Reverse(char s[], int low, int high)
{
    while (low <= high)
    {
        swap(s[low], s[high]);
        low++;
        high--;
    }
}

string ReverseWords(char s[], int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (s[end] == ' ')
        {
            Reverse(s, start, end - 1);
            start = end + 1;
        }
    }
    Reverse(s, start, n - 1);
    Reverse(s, 0, n - 1);
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    char strArr[n];
    for (int i = 0; i < n; i++)
    {
        strArr[i] = s[i];
    }
    string str = ReverseWords(strArr, n);
    cout << str;
    return 0;
}