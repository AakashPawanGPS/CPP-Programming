#include <bits/stdc++.h>
using namespace std;

int check(vector<string> B)
{
    int res = 0;
    int n = B.size();
    for (int i = 0; i < n; i++)
    {
        if (B[i][0] == 'A' || B[i][0] == 'a')
            res++;
    }
    return res;
}

int main()
{
    int N;
    cin >> N;
    vector<string> B(N);
    for (int j = 0; j < N; j++)
    {
        cin >> B[j];
    }
    int result;
    result = check(B);
    cout << result;
    return 0;
}