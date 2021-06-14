#include<bits/stdc++.h>
using namespace std;

bool isPalin(string str , int start , int end){
    int len=str.length();
    if(len==0 || len==1){
        return true;
    }
    if(start>=end){
        return true;
    }
    return(str[start]==str[end] && isPalin(str,start+1,end-1));

}

int main(){
    string str="malayalam";
    int len=str.length();
    int start=0;
    int end=len-1;
    bool res=isPalin(str,start , end);
    cout<<res;
    return 0;
}
