#include <bits/stdc++.h>
using namespace std;

bool perfectCube(int N)
{
    int cube_root;
    cube_root = round(cbrt(N));
    if (cube_root * cube_root * cube_root == N)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (perfectCube(arr[i]))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}