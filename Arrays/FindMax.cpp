#include<bits/stdc++.h>
using namespace std;

int getMaxInd(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={6,87,32,4,65,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=getMaxInd(arr,n);
    cout<<k;
    return 0;
}