#include<bits/stdc++.h>
using namespace std;

void PowerSet(string str){
    int n=str.length();
    int powSize = pow(2,n);
    for(int counter=0;counter<powSize;counter++){
        for(int j=0;j<n;j++){
            if(counter & (1<<j)){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
}

int main(){
    string str = "abc";
    PowerSet(str);
    return 0;
}
