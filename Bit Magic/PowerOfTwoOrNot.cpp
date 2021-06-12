#include<bits/stdc++.h>
using namespace std;

bool isPow1(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2!=0){
            return false;
        }
        n=n/2;
    }
    return true;
}

bool isPow2(int n){
    if(n==0){
        return false;
    }
    return ((n&(n-1))==0);
}



int main(){
    int n;
    cin>>n;
    bool res = isPow1(n);
    cout<<res<<endl;
    bool re2 = isPow2(n);
    cout<<re2;
}