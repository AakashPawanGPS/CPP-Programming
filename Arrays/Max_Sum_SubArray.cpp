#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[] , int N){
    int res=arr[0];
    int maxEnd=arr[0];
    int i;
    for(i=1;i<N;i++){
        maxEnd=max(maxEnd+arr[i],arr[i]);
        res=max(maxEnd,res);
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
    int res=MaxSumSubArray(A,N);
    cout<<res;
    return 0;
}