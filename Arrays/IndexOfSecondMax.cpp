#include<bits/stdc++.h>
using namespace std;

int secMaxInd(int arr[],int n){
    int res=-1;
    int max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max]){
            res=max;
            max=i;
        }
        else if(arr[i]!=arr[max]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}

int main(){
    int arr[]={6,87,32,4,65,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=secMaxInd(arr,n);
    cout<<k;
    return 0;
}