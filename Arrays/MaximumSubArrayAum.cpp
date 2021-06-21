#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[] ,int n ,int k){
    int curr_sum=0;
    for(int i=0;i<k;i++){
        curr_sum+=arr[i];
    }
    int max_sum=curr_sum;
    for(int i=k;i<n;i++){
        curr_sum += (arr[i] - arr[i-k]);
        max_sum = max(max_sum , curr_sum);
    }
    return max_sum;
}

int main(){
    int n , k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = maxSubArraySum(arr,n,k);
    cout<<res;
    return 0;
}