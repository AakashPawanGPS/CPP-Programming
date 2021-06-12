#include<bits/stdc++.h>
using namespace std;

int main(){
    int p=5;
    int res=0;
//Solution 1 - Naive
    int n=p;
    while(n>0){
        if((n&1)==1){                  //(n%2!=0)
            res++;
            n=n>>1;                    //n=n/2
        }
    }
    cout<<res<<endl;
    res=0;
//Solution 2 - Brian Kerningham's Algorithm
    n=p;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    cout<<res<<endl;
    res=0;
//Solution 3 - Lookup Table - Most efficient
    
}