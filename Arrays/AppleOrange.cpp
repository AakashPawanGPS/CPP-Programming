#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int apl[m];
    int ora[n];
    int NoofApples = 0;
    int NoofOranges = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> apl[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ora[i];
    }
    int apdis[m];
    int ordis[n];
    for (int i = 0; i < m; i++)
    {
        apdis[i] = apl[i] + a;
    }
    for (int i = 0; i < n; i++)
    {
        ordis[i] = ora[i] + b;
    }

    for (int i = 0; i < m; i++)
    {
        if (apdis[i] >= s && apdis[i] <= t)
        {
            NoofApples++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ordis[i] >= s && ordis[i] <= t)
        {
            NoofOranges++;
        }
    }
    cout << NoofApples << "\n"
         << NoofOranges;
    return 0;
}