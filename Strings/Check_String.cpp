#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=s.length();

    int res=1;

    int i=0;
    int j=n-1;

    while(s[j]=='>'){
        if(s[i]=='<' && s[i+1]=='/'){
            i+=2;
            j--;
        }
        else{
            res=0;
            cout<<"Error"<<endl;
        }
    }
    for(int k=i;k<j;k++){
        if(s[k]>='a' && s[k]<='z' || (s[k]>='0' && s[k]<='9')){

        }
        else{
            res=0;
            cout<<"Error"<<endl;
        }
    }
    if(res==1){
        cout<<"Success"<<endl;
    }
}