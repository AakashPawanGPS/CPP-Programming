#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {20,15,20,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int xor1=0,res1=0,res2=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    int sn = xor1 & ~(xor1-1);
    for(int i=0;i<n;i++){
        if((arr[i]&sn)!=0){
            res1=res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
    }
    cout<<res1<<" "<<res2;
    return 0;
}