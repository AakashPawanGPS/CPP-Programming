#include<bits/stdc++.h>
using namespace std;

void printn(int n){
    if(n==0){
        return;
    }
    printn(n-1);                       //Not tail recursive 
    cout<<n<<endl;
}

void tailrecursive(int n , int k){      //Tail Recursive
    if(n==0){
        return; 
    }
    cout<<k<<endl;
    tailrecursive(n-1,k+1);
}

int main(){
    int n=5;
    printn(n);
    int k=1;
    tailrecursive(n,k);
    return 0;
}