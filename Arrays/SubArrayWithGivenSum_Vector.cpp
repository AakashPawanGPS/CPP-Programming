#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector <int> m;
        
        long long currsum=0;
        int start=0,end=0;
        for(int i=-1;i<n;){
            if(currsum<s){
                currsum+=arr[++i];
                end=i;
            }
    
            else if(currsum>s){
                currsum-=arr[start];
                start+=1;
            }
            
            if(currsum==s){
                m.push_back(start+1);
                m.push_back(end+1);
                return m;
            }        
    
        }
        
        m.push_back(-1);
        return m;
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
} 