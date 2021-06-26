#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        bool cond = true;
        if(s[0]!='<' && s[1]!='/' && s[s.size()-1]!='>'){
            cout << "Error" << endl;
            continue;
        }
        if(s.size()==3){
            cout << "Error" << endl;
            continue;
        }
        for(int i=2; i<=s.size()-2; ++i){
            if( (s[i]>='a' && s[i]<='z') || ((s[i]>='0') && (s[i]<='9')) ){
                // just pass
            }
            else{
                cond = false;
                cout << "Error" << endl;
                break;
            }
        }
        
        if(cond) cout << "Success" << endl;

    }
    return 0;
}