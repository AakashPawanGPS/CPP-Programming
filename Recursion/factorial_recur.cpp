#include<bits/stdc++.h>
using namespace std;

int fact(int n , int q){
    if(n==0 || n==1){
        return q;
    }
    return fact(n-1 , q*n);
}

int main(){
    int n=6,q=1;
    int k = fact(n,q);
    cout<<k;
    return 0;
}