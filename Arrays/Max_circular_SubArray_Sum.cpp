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

int MinSumSubArray(int arr[] , int N){
    int res=arr[0];
    int minEnd=arr[0];
    int i;
    for(i=1;i<N;i++){
        minEnd=min(minEnd+arr[i],arr[i]);
        res=min(minEnd,res);
    }
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    return max(abs(res-sum) , sum);
}

int main(){
    int N;
    cin>>N;
    int A[N];
    int i;
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    int res=max(MaxSumSubArray(A,N),MinSumSubArray(A,N));
    cout<<res;
    return 0;
}