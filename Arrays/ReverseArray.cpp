#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int l=0;
    int r=n-1;
    int temp;
    while(l<r){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}

int main(){
    int arr[]={7,20,30,105};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}