#include<bits/stdc++.h>
using namespace std;

int indexOfFirstOccurrence(int arr[] , int n , int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(x>arr[mid]){
            low=mid+1;
        }
        else if(x<arr[mid]){
            high=mid-1;
        }
        else{
            if(mid==0 || arr[mid]!=arr[mid-1]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int indexOfFirstOccurrence(int arr[] , int low , int high , int x){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(x>arr[mid]){
        return indexOfFirstOccurrence(arr,mid+1,high,x);
    }
    else if(x<arr[mid]){
        return indexOfFirstOccurrence(arr,low,mid-1,x);
    }
    else{
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid;
        }
        else{
            return indexOfFirstOccurrence(arr,low,mid-1,x);
        }
    }
}

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res_iter = indexOfFirstOccurrence(arr,n,x);
    int res_recur = indexOfFirstOccurrence(arr,0,n-1,x);
    cout<<res_iter<<"\n"<<res_recur;

    return 0;
}