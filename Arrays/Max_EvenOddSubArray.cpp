#include<bits/stdc++.h>
using namespace std;

int MaxEvenOddSubArray(int arr[] , int N){
    int res=1;
    int curr=1;
    int i;
    for(i=1;i<N;i++){
        if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i]%2!=0 && arr[i-1]%2==0){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
        }
    }
    return res;
}

int main(){
    int N;
    cin>>N;
    int A[N];
    int i;
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    int res=MaxEvenOddSubArray(A,N);
    cout<<res;
    return 0;
}