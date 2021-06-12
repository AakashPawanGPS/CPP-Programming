#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void crossstring(string s, int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if((i==j) || (i+j==size-1) )
                cout<<s[j];
            
            else
                cout<<" ";
            
        }
        
        cout<<endl;
    }
    

}
int main(){
    string s;
    cout<<"Enter the String :";
    cin>> s ;
    int size = s.length();
    crossstring(s,size);
    return 0;

}