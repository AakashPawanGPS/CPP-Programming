#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> leaders(int a[], int n){
        vector<int> v;
        int curr=a[n-1];
        v.push_back(curr);
        for(int i=n-2;i>=0;i--){
            if(curr<=a[i]){
                curr=a[i];
                v.push_back(curr);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

int main()
{
    long long n;
    cin >> n;
    
    int a[n];

    for(long long i =0;i<n;i++){
        cin >> a[i];
    }
    Solution obj;

    vector<int> v = obj.leaders(a, n);

    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    
    cout << endl;

}
