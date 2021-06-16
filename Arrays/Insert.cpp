#include<bits/stdc++.h>
using namespace std;

int insert(int arr[] , int n , int x , int cap , int pos){
    if(n==cap){
        return n;
    }
    int i=pos-1;
    for(int j=n-1;j>=i;j--){
        arr[j+1]=arr[j];
    }
    arr[i]=x;
    return (n+1);
}

int main(){
    int arr[]={5,7,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cap=10;
    int x=3;
    int pos=2;

    int k=insert(arr,n,x,cap,pos);

    cout<<k;
    return 0;
}