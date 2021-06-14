#include<bits/stdc++.h>
using namespace std;

int fib(int n){                      //Tail Recursive
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

int fibo(int n){                     //Recursive
    if(n==0){
        return 0; 
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n=6;
    int k=fibo(n);
    cout<<k;
    return 0;
}