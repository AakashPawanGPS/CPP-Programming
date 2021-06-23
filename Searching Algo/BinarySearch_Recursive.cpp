#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int low , int high , int x){

    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return binarySearch(arr,low,mid-1,x);
    }
    else{
        return binarySearch(arr,mid+1,high,x);
    }
}

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int res = binarySearch(arr,low,high,x);
    cout<<res;
    return 0;
}