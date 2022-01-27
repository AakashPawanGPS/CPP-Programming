#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    int n = s.length();
    string res = " ";
    vector<vector<char>> str = {{'0'}, {'@', ',', '@'}, {'2', 'A', 'B', 'C', 'a', 'b', 'c', '2'}, {'3', 'D', 'E', 'F', 'd', 'e', 'f', '3'}, {'4', 'G', 'H', 'I', 'g', 'h', 'i', '4'}, {'5', 'J', 'K', 'L', 'j', 'k', 'l', '5'}, {'6', 'M', 'N', 'O', 'm', 'n', 'o', '6'}, {'7', 'P', 'Q', 'R', 'S', 'p', 'q', 'r', 's', '7'}, {'8', 'T', 'U', 'V', 't', 'u', 'v', '8'}, {'9', 'W', 'X', 'Y', 'Z', 'w', 'x', 'y', 'z', '9'}};
    char t = s[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != t || s[i + 1] == '\0')
        {
            char temp = str[(int)t][count];
            res += temp;
            count = 1;
            t = s[i];
            break;
        }
        else if (s[i] == '0')
            res += " ";
        else
        {
            count++;
        }
    }
    return res;
}

int main()
{
    string s = "442222444444";
    string res = solve(s);
    cout << res;
    return 0;
}