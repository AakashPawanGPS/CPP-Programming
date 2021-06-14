#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    int a=0;
    int b=1;
    int c=1;
    if(n==0){
        return a;
    }
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b; 
}

int main(){
    int n=6;
    int k=fib(n);
    cout<<k;
    return 0;
}