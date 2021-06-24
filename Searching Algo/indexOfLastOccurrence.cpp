#include<bits/stdc++.h>
using namespace std;

int indexOfLastOccurrence(int arr[] , int n , int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<x){
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}

int indexOfLastOccurrence(int arr[] , int low , int high , int x , int n){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]>x){
        return indexOfLastOccurrence(arr,low,mid-1,x,n);
    }
    else if(arr[mid]<x){
        return indexOfLastOccurrence(arr,mid+1,high,x,n);
    }
    else{
        if(mid==n-1 || arr[mid+1]!=arr[mid]){
            return mid;
        }
        else{
            return indexOfLastOccurrence(arr,mid+1,high,x,n);
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
    int res_iter=indexOfLastOccurrence(arr,n,x);
    int res_recur=indexOfLastOccurrence(arr,0,n-1,x ,n);
    cout<<res_iter<<"\n"<<res_recur;
    return 0;
}