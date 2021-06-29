#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:

    bool feasible(int arr[] , int n , int m , int ans){
        int req=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>ans){
                req++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        return (req<=m);
    }
    
    int findPages(int arr[], int n, int m) 
    {
        int sum=0;
        int mx=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            mx=max(mx,arr[i]);
        }
        
        int low=mx;
        int high=sum;
        int res=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(feasible(arr,n,m,mid)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}