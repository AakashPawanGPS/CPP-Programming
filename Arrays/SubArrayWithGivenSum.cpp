#include<bits/stdc++.h>
using namespace std;

bool HasSubArraySum(int arr[] , int n , int sum){
    int curr_sum = arr[0];
    int start=0;
    for(int end=1;end<n;end++){
        while(curr_sum>sum && start<end-1){
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum == sum){
            return true;
        }
        if(end<n){
            curr_sum+=arr[end];
        }
    }
    return (curr_sum == sum);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    bool res = HasSubArraySum(arr , n , sum);
    cout<<res;
    return 0;
}