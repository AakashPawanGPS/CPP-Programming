#include <bits/stdc++.h>
using namespace std;

bool isPresent(int x, vector<int> arr, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        if (arr[i] == x)
            return true;
    }
    return false;
}

vector<int> solve(int N, vector<int> A)
{
    // Write your code here
    vector<int> res;
    vector<int> X(N, 0);
    vector<int> Y(N, 0);

    for (int i = 1; i < N; i++)
    {
        set<int> s(A.begin(), A.begin() + i);
        vector<int> l(s.begin(), s.end());
        for (int k = 0; k < l.size(); k++)
        {
            if (!isPresent(l[k], A, i, N))
                X[i]++;
        }
    }

    for (int i = N - 2; i >= 0; i--)
    {
        set<int> s(A.begin() + i + 1, A.end());
        vector<int> r(s.begin(), s.end());
        for (int k = 0; k < r.size(); k++)
        {
            if (!isPresent(r[k], A, 0, i + 1))
                Y[i]++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        int p = abs(X[i] - Y[i]);
        res.push_back(p);
    }
    // for (auto i : X)
    //     cout << i << " ";
    // cout << endl;
    // for (auto i : Y)
    //     cout << i << " ";
    cout << endl;
    return res;
}

int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // int T;
    // cin >> T;
    // for (int t_i = 0; t_i < T; t_i++)
    // {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i_A = 0; i_A < N; i_A++)
    {
        cin >> A[i_A];
    }

    vector<int> out_;
    out_ = solve(N, A);
    cout << out_[0];
    for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
        cout << " " << out_[i_out_];
    }
    cout << "\n";
    // }
}