#include<bits/stdc++.h>
using namespace std;

int subset_sum(int arr[],int n,int sum){
    if(n==0){
        return (sum==0)?1:0;
    }
    return subset_sum(arr,n-1,sum) + subset_sum(arr,n-1,sum-arr[n-1]);
}

int main(){
    int n=3;
    int arr[n]={10,20,15};
    int sum=36;
    cout<<subset_sum(arr,n,sum);
}