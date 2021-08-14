#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    int position = 0;

    while (v.size() > 1)
    {
        position++;
        position %= v.size();
        v.erase(v.begin() + position);
    }
    cout << v[0];
    return 0;
}