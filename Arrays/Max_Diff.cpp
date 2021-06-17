#include<bits/stdc++.h>
using namespace std;

int MaxDif(int arr[] , int n){
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minval);
        minval=min(minval,arr[j]);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=MaxDif(arr,n);
    cout<<res;
    return 0;
}