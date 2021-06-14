#include<bits/stdc++.h>
using namespace std;

int sumofN(int n){
    if(n==0){
        return 0;
    }
    return n+sumofN(n-1);
}

int main(){
    int n=6;
    int k = sumofN(n);
    cout<<k;
    return 0;
}
