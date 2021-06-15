#include<bits/stdc++.h>
using namespace std;

void perm(string s,int i=0){
    if(i==s.length()){
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        perm(s,i+1);
        swap(s[j],s[i]);
    }
}

int main(){
    string s="ABCD";
    perm(s);
    return 0;
}