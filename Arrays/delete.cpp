#include<bits/stdc++.h>
using namespace std;

int delet(int arr[] ,int n,  int x){
    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return -1;
    }
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    return (n-1);

}

int main(){
    int arr[]={3,5,7,9,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    int k=delet(arr,n,x);
    cout<<k;
    return 0;
}