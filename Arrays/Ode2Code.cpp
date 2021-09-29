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
        if (isPresent(A[i], A, 0, i) && !isPresent(A[i], A, i + 1, N))
        {
            X[i]++;
        }
    }
    for (int i = 0; i < N - 1; i++)
    {
        if (!isPresent(A[i], A, 0, i) && isPresent(A[i], A, i + 1, N))
        {
            Y[i]++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        res[i] = abs(X[i] - Y[i]);
    }

    return res;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
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
    }
}