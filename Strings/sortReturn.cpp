#include <bits/stdc++.h>
using namespace std;

string sortreturn(string a)
{
    int hash[26] = {0};
    for (int i = 0; i < a.size(); ++i)
    {
        hash[abs((int)a[i] - (int)'a')]++;
    }
    string s = "";
    for (int i = 0; i < 26; ++i)
    {
        if (hash[i] > 0)
        {
            for (int j = 0; j < hash[i]; ++j)
            {
                s += (i + 'a');
            }
        }
    }
    // for(int i=0; i<26; ++i){
    //   cout << hash[i] << " ";
    // }

    return s;
}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    a += b;
    string res1 = sortreturn(a);
    string res2 = sortreturn(c);
    //cout << "a->" << res1 << " c->" << res2 << endl;
    if (res1 == res2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}