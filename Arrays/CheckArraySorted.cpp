#include<bits/stdc++.h>
using namespace std;

bool arraysorted(int arr[] , int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={7,20,30,105};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool k=arraysorted(arr,n);
    cout<<k;
    return 0;
}